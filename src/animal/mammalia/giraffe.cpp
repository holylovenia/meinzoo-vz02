#include "giraffe.h"

Giraffe::Giraffe(int _x, int _y, int _weight) : def_ID(6),
                                                def_ratio_meat(0),
                                                def_ratio_plant(60),
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
void Giraffe::Interact() {
  std::cout << "The giraffe is looking down to you, literally" << std::endl;
}
void Giraffe::Move(int movement) {
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
bool Giraffe::GetBehavior() {
  return is_wild;
}
int Giraffe::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int Giraffe::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point Giraffe::GetPosition() {
  return position;
}
bool Giraffe::IsLandAnimal() {
  return is_land_animal;
}
bool Giraffe::IsWaterAnimal() {
  return is_water_animal;
}
bool Giraffe::IsAirAnimal() {
  return is_air_animal;
}
bool Giraffe::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool Giraffe::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool Giraffe::IsOmnivore() {
  return eat_meat && eat_plant;
}
bool Giraffe::IsEnemy(int x) {
  return false;
}
int Giraffe::GetID() {
  return ID;
}
void Giraffe::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int Giraffe::GetX() const {
  return position.GetX();
}
int Giraffe::GetY() const {
  return position.GetY();
}