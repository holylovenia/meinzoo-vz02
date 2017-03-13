#include "wolf.h"

Wolf::Wolf(int _x, int _y, int _weight) : def_ID(1),
                                          def_ratio_meat(50),
                                          def_ratio_plant(0),
                                          def_limb_count(4),
                                          def_skin_type("Hairy"),
                                          def_eat_meat(true),
                                          def_eat_plant(false) {
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
}
void Wolf::Interact() {
  std::cout << "The wolf is howling" << std::endl;
}
void Wolf::Move(int movement) {
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
bool Wolf::GetBehavior() {
  return is_wild;
}
int Wolf::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int Wolf::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point Wolf::GetPosition() {
  return position;
}
bool Wolf::IsLandAnimal() {
  return is_land_animal;
}
bool Wolf::IsWaterAnimal() {
  return is_water_animal;
}
bool Wolf::IsAirAnimal() {
  return is_air_animal;
}
bool Wolf::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool Wolf::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool Wolf::IsOmnivore() {
  return eat_meat && eat_plant;
}
bool Wolf::IsEnemy(int x) {
  return false;
}
int Wolf::GetID() {
  return ID;
}
void Wolf::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int Wolf::GetX() const {
  return position.GetX();
}
int Wolf::GetY() const {
  return position.GetY();
}