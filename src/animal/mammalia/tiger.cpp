#include "tiger.h"

Tiger::Tiger(int _x, int _y, int _weight) : def_ID(3),
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
void Tiger::Interact() {
  std::cout << "The tiger is graciously lying on the grass" << std::endl;
}
void Tiger::Move(int movement) {
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
bool Tiger::GetBehavior() {
  return is_wild;
}
int Tiger::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int Tiger::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point Tiger::GetPosition() {
  return position;
}
bool Tiger::IsLandAnimal() {
  return is_land_animal;
}
bool Tiger::IsWaterAnimal() {
  return is_water_animal;
}
bool Tiger::IsAirAnimal() {
  return is_air_animal;
}
bool Tiger::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool Tiger::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool Tiger::IsOmnivore() {
  return eat_meat && eat_plant;
}
bool Tiger::IsEnemy(int x) {
  return false;
}
int Tiger::GetID() {
  return ID;
}
void Tiger::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int Tiger::GetX() const {
  return position.GetX();
}
int Tiger::GetY() const {
  return position.GetY();
}