#include "owl.h"

Owl::Owl(int _x, int _y, int _weight) : def_ID(17),
                                        def_ratio_meat(60),
                                        def_ratio_plant(0),
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
  is_water_animal = false;
  is_air_animal = true;
  weight = _weight;
  is_wild = false;
  eat_meat = def_eat_meat;
  eat_plant = def_eat_plant;
  AnimalFood::AddTotalMeat(ratio_plant * weight / 100);
}
void Owl::Interact() {
  std::cout << "The owl is hooting randomly" << std::endl;
}
void Owl::Move(int movement) {
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
bool Owl::GetBehavior() {
  return is_wild;
}
int Owl::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int Owl::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point Owl::GetPosition() {
  return position;
}
bool Owl::IsLandAnimal() {
  return is_land_animal;
}
bool Owl::IsWaterAnimal() {
  return is_water_animal;
}
bool Owl::IsAirAnimal() {
  return is_air_animal;
}
bool Owl::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool Owl::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool Owl::IsOmnivore() {
  return eat_meat && eat_plant;
}
bool Owl::IsEnemy(int x) {
  return false;
}
int Owl::GetID() {
  return ID;
}
void Owl::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int Owl::GetX() const {
  return position.GetX();
}
int Owl::GetY() const {
  return position.GetY();
}