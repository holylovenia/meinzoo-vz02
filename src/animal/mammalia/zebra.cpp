#include "zebra.h"

Zebra::Zebra(int _x, int _y, int _weight) : def_ID(4),
                                            def_ratio_meat(0),
                                            def_ratio_plant(45),
                                            def_limb_count(4),
                                            def_skin_type("Hairy"),
                                            def_eat_meat(false),
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
  AnimalFood::AddTotalPlant(ratio_plant * weight / 100);
}
void Zebra::Interact()
{
  std::cout << "The zebra is running at the grass field" << std::endl;
}
void Zebra::Move(int movement) {
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
bool Zebra::GetBehavior() {
  return is_wild;
}
int Zebra::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int Zebra::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point Zebra::GetPosition() {
  return position;
}
bool Zebra::IsLandAnimal() {
  return is_land_animal;
}
bool Zebra::IsWaterAnimal() {
  return is_water_animal;
}
bool Zebra::IsAirAnimal() {
  return is_air_animal;
}
bool Zebra::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool Zebra::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool Zebra::IsOmnivore() {
  return eat_meat && eat_plant;
}
bool Zebra::IsEnemy(int x) {
  return false;
}
int Zebra::GetID() {
  return ID;
}
void Zebra::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int Zebra::GetX() const {
  return position.GetX();
}
int Zebra::GetY() const {
  return position.GetY();
}