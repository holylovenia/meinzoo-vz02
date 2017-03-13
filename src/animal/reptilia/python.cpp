#include "python.h"

Python::Python(int _x, int _y, int _weight) : def_ID(9),
                                              def_ratio_meat(40),
                                              def_ratio_plant(0),
                                              def_limb_count(0),
                                              def_skin_type("Scute"),
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
void Python::Interact() {
  std::cout << "The python is slithering across the ground" << std::endl;
}
void Python::Move(int movement) {
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
bool Python::GetBehavior() {
  return is_wild;
}
int Python::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int Python::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point Python::GetPosition() {
  return position;
}
bool Python::IsLandAnimal() {
  return is_land_animal;
}
bool Python::IsWaterAnimal() {
  return is_water_animal;
}
bool Python::IsAirAnimal() {
  return is_air_animal;
}
bool Python::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool Python::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool Python::IsOmnivore() {
  return eat_meat && eat_plant;
}
bool Python::IsEnemy(int x) {
  return false;
}
int Python::GetID() {
  return ID;
}
void Python::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int Python::GetX() const {
  return position.GetX();
}
int Python::GetY() const {
  return position.GetY();
}
char Python::Render() {
  return 'O';
}