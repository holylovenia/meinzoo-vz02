#include <ctime>
#include <random>
#include "water_cage.h"

WaterCage::WaterCage() {
  nb_animal = 0;
}
void WaterCage::AddPoint(const Point& p) {
  area.insert(p);
}
void WaterCage::RemovePoint(const Point& p) {
  area.erase(p);
}
void WaterCage::AddAnimal(Shark& A) {
  if (nb_animal < int(area.size() / 10 * 3)) { 
    bool placeable = true;
    if (A.GetBehavior()) {
      if ((shark[0] != NULL) && (A.IsEnemy(shark[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (barracuda[0] != NULL) && (A.IsEnemy(barracuda[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (clownfish[0] != NULL) && (A.IsEnemy(clownfish[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (crocodile[0] != NULL) && (A.IsEnemy(crocodile[0]->GetID()))) {
        placeable = false;
      }
    }
    if (placeable) {
      shark.push_back(&A);
      nb_animal++;
    }
  }
}
void WaterCage::AddAnimal(Barracuda& A) {
  if (nb_animal < int(area.size() / 10 * 3)) { 
    bool placeable;
    if (A.GetBehavior()) {
      if ((shark[0] != NULL) && (A.IsEnemy(shark[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (barracuda[0] != NULL) && (A.IsEnemy(barracuda[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (clownfish[0] != NULL) && (A.IsEnemy(clownfish[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (crocodile[0] != NULL) && (A.IsEnemy(crocodile[0]->GetID()))) {
        placeable = false;
      }
    } else {
      placeable = true;
    }
    if (placeable) {
      barracuda.push_back(&A);
      nb_animal++;
    }
  }
}
void WaterCage::AddAnimal(Clownfish& A) {
  if (nb_animal < int(area.size() / 10 * 3)) { 
    bool placeable;
    if (A.GetBehavior()) {
      if ((shark[0] != NULL) && (A.IsEnemy(shark[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (barracuda[0] != NULL) && (A.IsEnemy(barracuda[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (clownfish[0] != NULL) && (A.IsEnemy(clownfish[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (crocodile[0] != NULL) && (A.IsEnemy(crocodile[0]->GetID()))) {
        placeable = false;
      }
    } else {
      placeable = true;
    }
    if (placeable) {
      clownfish.push_back(&A);
      nb_animal++;
    }
  }
}
void WaterCage::AddAnimal(Crocodile& A) {
  if (nb_animal < int(area.size() / 10 * 3)) { 
    bool placeable;
    if (A.GetBehavior()) {
      if ((shark[0] != NULL) && (A.IsEnemy(shark[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (barracuda[0] != NULL) && (A.IsEnemy(barracuda[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (clownfish[0] != NULL) && (A.IsEnemy(clownfish[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (crocodile[0] != NULL) && (A.IsEnemy(crocodile[0]->GetID()))) {
        placeable = false;
      }
    } else {
      placeable = true;
    }
    if (placeable) {
      crocodile.push_back(&A);
      nb_animal++;
    }
  }
}
void WaterCage::MoveAnimal() {
  srand(time(NULL));
  int i = rand() % TOTAL_WATER_ANIMAL;
    unsigned int seed = time(NULL);
  subtract_with_carry_engine<unsigned,24,10,24> generator (seed); 
  
  if (i == 0) {
    for (auto iter = shark.begin(); iter < shark.end(); ++iter) {
      char movement = generator() % 4;
      bool movement_in_water_cage = false;
      int no_of_tries = 0;
      do {      
        (*iter)->Move(movement);
        
        movement_in_water_cage = area.find((*iter)->GetPosition()) != area.end();
        if (!movement_in_water_cage) {
          movement = (movement + 2) % 4;
          (*iter)->Move(movement);
          movement = (movement + 3) % 4;
          no_of_tries++;
        }
      } while (!movement_in_water_cage && no_of_tries < 4);
    }
  } else if (i == 1) {
    for (auto iter = barracuda.begin(); iter < barracuda.end(); ++iter) {
      char movement = generator() % 4;
      bool movement_in_water_cage = false;
      int no_of_tries = 0;
      do {      
        (*iter)->Move(movement);
        
        movement_in_water_cage = area.find((*iter)->GetPosition()) != area.end();
        if (!movement_in_water_cage) {
          movement = (movement + 2) % 4;
          (*iter)->Move(movement);
          movement = (movement + 3) % 4;
          no_of_tries++;
        }
      } while (!movement_in_water_cage && no_of_tries < 4);
    }
  } else if (i == 2) {
    for (auto iter = clownfish.begin(); iter < clownfish.end(); ++iter) {
      char movement = generator() % 4;
      bool movement_in_water_cage = false;
      int no_of_tries = 0;
      do {      
        (*iter)->Move(movement);
        
        movement_in_water_cage = area.find((*iter)->GetPosition()) != area.end();
        if (!movement_in_water_cage) {
          movement = (movement + 2) % 4;
          (*iter)->Move(movement);
          movement = (movement + 3) % 4;
          no_of_tries++;
        }
      } while (!movement_in_water_cage && no_of_tries < 4);
    }
  } else {
    for (auto iter = crocodile.begin(); iter < crocodile.end(); ++iter) {
      char movement = generator() % 4;
      bool movement_in_water_cage = false;
      int no_of_tries = 0;
      do {      
        (*iter)->Move(movement);
        
        movement_in_water_cage = area.find((*iter)->GetPosition()) != area.end();
        if (!movement_in_water_cage) {
          movement = (movement + 2) % 4;
          (*iter)->Move(movement);
          movement = (movement + 3) % 4;
          no_of_tries++;
        }
      } while (!movement_in_water_cage && no_of_tries < 4);
    }
  }
}
vector<Point> WaterCage::GetArea() {
  return vector<Point>(area.begin(), area.end());
}
char WaterCage::Render() {
  return 'w';
}