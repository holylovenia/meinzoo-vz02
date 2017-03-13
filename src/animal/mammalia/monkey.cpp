#include "monkey.h"

Monkey::Monkey(int _x, int _y, int _weight) : def_ID(5),
                                              def_ratio_meat(10),
                                              def_ratio_plant(40),
                                              def_limb_count(4),
                                              def_skin_type("Hairy"),
                                              def_eat_meat(true),
                                              def_eat_plant(true)  {
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
void Monkey::Interact() {
  std::cout << "The monkey is peeling a banana" << std::endl;
}
void Monkey::Move(int movement) {
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
bool Monkey::GetBehavior() {
  return is_wild;
}
int Monkey::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int Monkey::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point Monkey::GetPosition() {
  return position;
}
bool Monkey::IsLandAnimal() {
  return is_land_animal;
}
bool Monkey::IsWaterAnimal() {
  return is_water_animal;
}
bool Monkey::IsAirAnimal() {
  return is_air_animal;
}
bool Monkey::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool Monkey::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool Monkey::IsOmnivore() {
  return eat_meat && eat_plant;
}
bool Monkey::IsEnemy(int x) {
  return false;
}
int Monkey::GetID() {
  return ID;
}
void Monkey::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int Monkey::GetX() const {
  return position.GetX();
}
int Monkey::GetY() const {
  return position.GetY();
}