#include "duck.h"

Duck::Duck(int _x, int _y, int _weight) : def_ID(16),
                                          def_ratio_meat(30),
                                          def_ratio_plant(30),
                                          def_limb_count(2),
                                          def_skin_type("Feather"),
                                          def_eat_meat(true),
                                          def_eat_plant(true) {
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
void Duck::Interact() {
  std::cout << "The duck just quacked loudly" << std::endl;
}
void Duck::Move(int movement) {
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
bool Duck::GetBehavior() {
  return is_wild;
}
int Duck::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int Duck::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point Duck::GetPosition() {
  return position;
}
bool Duck::IsLandAnimal() {
  return is_land_animal;
}
bool Duck::IsWaterAnimal() {
  return is_water_animal;
}
bool Duck::IsAirAnimal() {
  return is_air_animal;
}
bool Duck::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool Duck::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool Duck::IsOmnivore() {
  return eat_meat && eat_plant;
}
bool Duck::IsEnemy(int x) {
  return false;
}
int Duck::GetID() {
  return ID;
}
void Duck::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int Duck::GetX() const {
  return position.GetX();
}
int Duck::GetY() const {
  return position.GetY();
}
char Duck::Render() {
  return 'O';
}