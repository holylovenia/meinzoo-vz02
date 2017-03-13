#include "lion.h"

Lion::Lion(int _x, int _y, int _weight) : def_ID(2),
                                          def_ratio_meat(60),
                                          def_ratio_plant(0),
                                          def_limb_count(4),
                                          def_skin_type("Hairy"),
                                          def_eat_meat(true),
                                          def_eat_plant(false)  {
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
void Lion::Interact() {
  std::cout << "The lion is roaring" << std::endl;
}
void Lion::Move(int movement) {
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
bool Lion::GetBehavior() {
  return is_wild;
}
int Lion::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int Lion::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point Lion::GetPosition() {
  return position;
}
bool Lion::IsLandAnimal() {
  return is_land_animal;
}
bool Lion::IsWaterAnimal() {
  return is_water_animal;
}
bool Lion::IsAirAnimal() {
  return is_air_animal;
}
bool Lion::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool Lion::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool Lion::IsOmnivore() {
  return eat_meat && eat_plant;
}
bool Lion::IsEnemy(int x) {
  return false;
}
int Lion::GetID() {
  return ID;
}
void Lion::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int Lion::GetX() const {
  return position.GetX();
}
int Lion::GetY() const {
  return position.GetY();
}
char Lion::Render() {
  return 'O';
}