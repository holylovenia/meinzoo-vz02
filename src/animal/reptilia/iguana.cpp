#include "iguana.h"

Iguana::Iguana(int _x, int _y, int _weight) : def_ID(11),
                                              def_ratio_meat(20),
                                              def_ratio_plant(40),
                                              def_limb_count(4),
                                              def_skin_type("Scute"),
                                              def_eat_meat(true),
                                              def_eat_plant(true) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  ratio_meat = def_ratio_meat;
  ratio_plant = def_ratio_plant;
  is_land_animal = true;
  is_water_animal = false;
  is_air_animal = false;
  weight = _weight;
  is_wild = false;
  eat_meat = def_eat_meat;
  eat_plant = def_eat_plant;
  AnimalFood::AddTotalMeat(ratio_meat * weight / 100);
  AnimalFood::AddTotalPlant(ratio_plant * weight / 100);
}

void Iguana::Interact() {
  std::cout << "The iguana is calmly sleeping on a tree" << std::endl;
}

void Iguana::Move(int movement) {
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

bool Iguana::GetBehavior() {
  return is_wild;
}

int Iguana::GetReqMeat() {
  return ratio_meat * weight / 100;
}

int Iguana::GetReqPlant() {
  return ratio_plant * weight / 100;
}

Point Iguana::GetPosition() {
  return position;
}

bool Iguana::IsLandAnimal() {
  return is_land_animal;
}

bool Iguana::IsWaterAnimal() {
  return is_water_animal;
}

bool Iguana::IsAirAnimal() {
  return is_air_animal;
}

bool Iguana::IsHerbivore() {
  return !eat_meat && eat_plant;
}

bool Iguana::IsCarnivore() {
  return eat_meat && !eat_plant;
}

bool Iguana::IsOmnivore() {
  return eat_meat && eat_plant;
}

bool Iguana::IsEnemy(int x) {
  return false;
}

int Iguana::GetID() {
  return ID;
}

void Iguana::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}

int Iguana::GetX() const {
  return position.GetX();
}

int Iguana::GetY() const {
  return position.GetY();
}