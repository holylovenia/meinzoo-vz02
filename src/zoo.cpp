#include <cctype>
#include <cstdlib>
#include <ctime>
#include "zoo.h"

Zoo::Zoo() {
  map = new Cell**[WIDTH];
  map_char = new char*[WIDTH];
  for (int i = 0; i < WIDTH; ++i) {
    map[i] = new Cell*[LENGTH];
    map_char[i] = new char[LENGTH];
    for (int j = 0; i < LENGTH; ++i) {
      map[i][j] = NULL;
      map_char[i][j] = ' ';
    }
  }
}
Zoo::~Zoo() {
  for (int i = 0; i < WIDTH; ++i) {
    delete [] map[i];
    delete [] map_char[i];
  }
  delete [] map;
  delete [] map_char;
}
void Zoo::SetTile(Cell* c, int i, int j) {
  map[i][j] = c;
}
Cell& Zoo::GetTile(int i, int j) {
  return *map[i][j];
}
void Zoo::InsertCage(const Cage& c) {
  cages.push_back(c);
}
Cage Zoo::RemoveCage(int i) {
  if (i < cages.size()) {
    Cage c = cages[i];
    cages.erase(cages.begin() + i);
    return c;
  }
}
void Zoo::Render() {
  for (int i = 0; i < WIDTH; ++i) {
    for (int j = 0; i < LENGTH; ++i) {
      map_char[i][j] = map[i][j]->Render();
    }
  }
  for (int i = 0; i < cages.size(); ++i) {
    vector<Point> area(cages[i].GetArea().begin(), cages[i].GetArea().end());
    for (int j = 0; j < area.size(); ++j) {
      map_char[area[j].GetY()][area[j].GetX()] = toupper(map_char[area[j].GetY()][area[j].GetX()]);
    }
  }
  for (int i = 0; i < cages.size(); ++i) {
    vector<Animal*> animal = cages[i].GetAnimal();
    for (int j = 0; j < animal.size(); ++j) {
      int x = (animal[j]->GetPosition()).GetX();
      int y = (animal[j]->GetPosition()).GetY();
      map_char[y][x] = animal[j]->Render();
    }
  }
  Point loc = visitor.GetPosition();
  map_char[loc.GetY()][loc.GetX()] = visitor.Render();
}
void Zoo::Print(int ux, int uy, int lx, int ly) {
  for (int i = uy; i <= ly; ++i) {
    for (int j = ux; j < lx; ++j) {
      cout << map_char[i][j];
    }
    cout << '\n';
  }
}
int Zoo::GetTotalReqMeat() {
  return AnimalDiet::GetTotalMeat();
}
int Zoo::GetTotalReqPlant() {
  return AnimalDiet::GetTotalPlant();
}
void Zoo::ListAllEntranceExit() {
  for (int i = 0; i < WIDTH; ++i) {
    for (int j = 0; j < LENGTH; ++j) {
      if (Road* r = dynamic_cast<Road*>(map[i][j])) {
        if (r->IsEntrance())
          entrance.insert(Point(j,i));
        else if (r->IsExit())
          exit.insert(Point(j,i));
      }
    }
  }
}
void Zoo::Tour() {
  bool visited[WIDTH][LENGTH];
  for (int i = 0; i < WIDTH; ++i) {
    for (int j = 0; j < LENGTH; ++j) {
      visited[i][j] = map[i][j]->IsAccessible();
    }
  }
  srand(time(NULL));
  auto it = entrance.begin();
  advance(it, rand() % entrance.size());
  Point loc = *it;
  visitor.SetPosition(loc);
  visited[loc.GetY()][loc.GetX()] = true;
  Print();
  cin.get();
  while (exit.find(visitor.GetPosition()) != exit.end()) {
    char movement = rand() % 4;
    bool movement_in_range;
    int no_of_tries = 0;
    do {
      visitor.Move(movement);
      loc = visitor.GetPosition();
      movement_in_range = (visited[loc.GetY()][loc.GetX()] == false);
      if (!movement_in_range) {
        movement = (movement + 2) % 4;
        visitor.Move(movement);
        movement = (movement + 3) % 4;
        no_of_tries++;
      } else {
        visited[loc.GetY()][loc.GetX()] = true;
      }
    } while (!movement_in_range && no_of_tries < 4);
    Print();
    for (int i = 0; i < cages.size(); ++i) {
      bool adjacent = cages[i].GetArea().find(loc.Up()) != cages[i].GetArea().end();
      if (!adjacent)
        adjacent = cages[i].GetArea().find(loc.Down()) != cages[i].GetArea().end();
      if (!adjacent)
        adjacent = cages[i].GetArea().find(loc.Left()) != cages[i].GetArea().end();
      if (!adjacent)
        adjacent = cages[i].GetArea().find(loc.Right()) != cages[i].GetArea().end();
      if (adjacent) {
        for (int j = 0; j < cages[i].GetAnimal().size(); ++i) {
          cages[i].GetAnimal()[j]->Interact();
        }
      }
    }
    cin.get();
  }
  visitor.ResetPosition();
}