#include <ctime>
#include <random>
#include "air_cage.h"

AirCage::AirCage() {
  nb_animal = 0;
}

void AirCage::AddPoint(const Point& p) {
  area.insert(p);
}

void AirCage::RemovePoint(const Point& p) {
  area.erase(p);
}

void AirCage::AddAnimal(Colibri& A) {
  if (nb_animal < int(area.size() / 10 * 3)) { 
    bool placeable = true;
    if (A.GetBehavior()) {
      if ((colibri[0] != NULL) && (A.IsEnemy(colibri[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (duck[0] != NULL) && (A.IsEnemy(duck[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (eagle[0] != NULL) && (A.IsEnemy(eagle[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (owl[0] != NULL) && (A.IsEnemy(owl[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (wild_colibri[0] != NULL) && (A.IsEnemy(wild_colibri[0]->GetID()))) {
        placeable = false;
      }
    }
    if (placeable) {
      colibri.push_back(&A);
      nb_animal++;
    }
  }
}

void AirCage::AddAnimal(Duck& A) {
  if (nb_animal < int(area.size() / 10 * 3)) { 
    bool placeable = true;
    if (A.GetBehavior()) {
      if ((colibri[0] != NULL) && (A.IsEnemy(colibri[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (duck[0] != NULL) && (A.IsEnemy(duck[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (eagle[0] != NULL) && (A.IsEnemy(eagle[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (owl[0] != NULL) && (A.IsEnemy(owl[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (wild_colibri[0] != NULL) && (A.IsEnemy(wild_colibri[0]->GetID()))) {
        placeable = false;
      }
    }
    if (placeable) {
      duck.push_back(&A);
      nb_animal++;
    }
  }
}

void AirCage::AddAnimal(Eagle& A) {
  if (nb_animal < int(area.size() / 10 * 3)) { 
    bool placeable = true;
    if (A.GetBehavior()) {
      if ((colibri[0] != NULL) && (A.IsEnemy(colibri[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (duck[0] != NULL) && (A.IsEnemy(duck[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (eagle[0] != NULL) && (A.IsEnemy(eagle[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (owl[0] != NULL) && (A.IsEnemy(owl[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (wild_colibri[0] != NULL) && (A.IsEnemy(wild_colibri[0]->GetID()))) {
        placeable = false;
      }
    }
    if (placeable) {
      eagle.push_back(&A);
      nb_animal++;
    }
  }
}

void AirCage::AddAnimal(Owl& A) {
  if (nb_animal < int(area.size() / 10 * 3)) { 
    bool placeable = true;
    if (A.GetBehavior()) {
      if ((colibri[0] != NULL) && (A.IsEnemy(colibri[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (duck[0] != NULL) && (A.IsEnemy(duck[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (eagle[0] != NULL) && (A.IsEnemy(eagle[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (owl[0] != NULL) && (A.IsEnemy(owl[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (wild_colibri[0] != NULL) && (A.IsEnemy(wild_colibri[0]->GetID()))) {
        placeable = false;
      }
    }
    if (placeable) {
      owl.push_back(&A);
      nb_animal++;
    }
  }
}

void AirCage::AddAnimal(WildColibri& A) {
  if (nb_animal < int(area.size() / 10 * 3)) { 
    bool placeable = true;
    if (A.GetBehavior()) {
      if ((colibri[0] != NULL) && (A.IsEnemy(colibri[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (duck[0] != NULL) && (A.IsEnemy(duck[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (eagle[0] != NULL) && (A.IsEnemy(eagle[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (owl[0] != NULL) && (A.IsEnemy(owl[0]->GetID()))) {
        placeable = false;
      }
      if ((placeable) && (wild_colibri[0] != NULL) && (A.IsEnemy(wild_colibri[0]->GetID()))) {
        placeable = false;
      }
    }
    if (placeable) {
      wild_colibri.push_back(&A);
      nb_animal++;
    }
  }
}

void AirCage::MoveAnimal() {
  srand(time(NULL));
  int i = rand() % TOTAL_AIR_ANIMAL;

  unsigned int seed = time(NULL);
  subtract_with_carry_engine<unsigned,24,10,24> generator (seed); 
  
  if (i == 0) {
    for (auto iter = colibri.begin(); iter < colibri.end(); ++iter) {
      char movement = generator() % 4;
      bool movement_in_air_cage = false;
      int no_of_tries = 0;
      do {      
        (*iter)->Move(movement);
        
        movement_in_air_cage = area.find((*iter)->GetPosition()) != area.end();
        if (!movement_in_air_cage) {
          movement = (movement + 2) % 4;
          (*iter)->Move(movement);
          movement = (movement + 3) % 4;
          no_of_tries++;
        }
      } while (!movement_in_air_cage && no_of_tries < 4);
    }
  } else if (i == 1) {
    for (auto iter = duck.begin(); iter < duck.end(); ++iter) {
      char movement = generator() % 4;
      bool movement_in_air_cage = false;
      int no_of_tries = 0;
      do {      
        (*iter)->Move(movement);
        
        movement_in_air_cage = area.find((*iter)->GetPosition()) != area.end();
        if (!movement_in_air_cage) {
          movement = (movement + 2) % 4;
          (*iter)->Move(movement);
          movement = (movement + 3) % 4;
          no_of_tries++;
        }
      } while (!movement_in_air_cage && no_of_tries < 4);
    }
  } else if (i == 2) {
    for (auto iter = eagle.begin(); iter < eagle.end(); ++iter) {
      char movement = generator() % 4;
      bool movement_in_air_cage = false;
      int no_of_tries = 0;
      do {      
        (*iter)->Move(movement);
        
        movement_in_air_cage = area.find((*iter)->GetPosition()) != area.end();
        if (!movement_in_air_cage) {
          movement = (movement + 2) % 4;
          (*iter)->Move(movement);
          movement = (movement + 3) % 4;
          no_of_tries++;
        }
      } while (!movement_in_air_cage && no_of_tries < 4);
    }
  } else if (i == 3) {
    for (auto iter = owl.begin(); iter < owl.end(); ++iter) {
      char movement = generator() % 4;
      bool movement_in_air_cage = false;
      int no_of_tries = 0;
      do {      
        (*iter)->Move(movement);
        
        movement_in_air_cage = area.find((*iter)->GetPosition()) != area.end();
        if (!movement_in_air_cage) {
          movement = (movement + 2) % 4;
          (*iter)->Move(movement);
          movement = (movement + 3) % 4;
          no_of_tries++;
        }
      } while (!movement_in_air_cage && no_of_tries < 4);
    }
  } else {
    for (auto iter = wild_colibri.begin(); iter < wild_colibri.end(); ++iter) {
      char movement = generator() % 4;
      bool movement_in_air_cage = false;
      int no_of_tries = 0;
      do {      
        (*iter)->Move(movement);
        
        movement_in_air_cage = area.find((*iter)->GetPosition()) != area.end();
        if (!movement_in_air_cage) {
          movement = (movement + 2) % 4;
          (*iter)->Move(movement);
          movement = (movement + 3) % 4;
          no_of_tries++;
        }
      } while (!movement_in_air_cage && no_of_tries < 4);
    }
  }
}

vector<Point> AirCage::GetArea() {
  return vector<Point>(area.begin(), area.end());
}