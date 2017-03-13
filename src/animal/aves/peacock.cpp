#include "peacock.h"

Peacock::Peacock(int _x, int _y, int _weight) : def_ID(20),
                                                def_ratio_meat(20),
                                                def_ratio_plant(40),
                                                def_limb_count(2),
                                                def_skin_type("Feather"),
                                                def_eat_meat(true),
                                                def_eat_plant(false) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  ratio_meat = def_ratio_meat;
  ratio_plant = def_ratio_plant;
  is_land_animal = true;
  is_water_animal = true;
  is_air_animal = true;
  weight = _weight;
  is_wild = false;
  eat_meat = def_eat_meat;
  eat_plant = def_eat_plant;
  AnimalFood::AddTotalMeat(ratio_meat * weight / 100);
  AnimalFood::AddTotalPlant(ratio_plant * weight / 100);
}

void Peacock::Interact() {
  std::cout << "The peacock is showing off its beautiful feather" << std::endl;
}

void Peacock::Move(int movement) {
  if (movement == 1) {
    position.SetY(position.GetY()-1);
  }
  else if (movement == 2) {
    position.SetX(position.GetX()+1);
  }
  else if (movement == 3) {
    position.SetY(position.GetY()+1);
  }
  else {
    position.SetX(position.GetX()-1);
  }
}

bool Peacock::GetBehavior() {
  return is_wild;
}

int Peacock::GetReqMeat() {
  return ratio_meat * weight / 100;
}

int Peacock::GetReqPlant() {
  return ratio_plant * weight / 100;
}

Point Peacock::GetPosition() {
  return position;
}

bool Peacock::IsLandAnimal() {
  return is_land_animal;
}

bool Peacock::IsWaterAnimal() {
  return is_water_animal;
}

bool Peacock::IsAirAnimal() {
  return is_air_animal;
}

bool Peacock::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool Peacock::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool Peacock::IsOmnivore() {
  return eat_meat && eat_plant;
}

bool Peacock::IsEnemy(int x) {
  return false;
}

int Peacock::GetID() {
  return ID;
}

void Peacock::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}

int Peacock::GetX() const {
  return position.GetX();
}
int Peacock::GetY() const {
  return position.GetY();
}