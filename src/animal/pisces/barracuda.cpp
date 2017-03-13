#include "barracuda.h"

Barracuda::Barracuda(int _x, int _y, int _weight) : def_ID(15),
                                                    def_ratio_meat(60),
                                                    def_ratio_plant(0),
                                                    def_limb_count(0),
                                                    def_skin_type("Scale"),
                                                    def_eat_meat(true),
                                                    def_eat_plant(false) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  ratio_meat = def_ratio_meat;
  ratio_plant = def_ratio_plant;
  is_land_animal = false;
  is_water_animal = true;
  is_air_animal = false;
  weight = _weight;
  is_wild = false;
  eat_meat = def_eat_meat;
  eat_plant = def_eat_plant;
  AnimalFood::AddTotalMeat(ratio_meat * weight / 100);
}
void Barracuda::Interact() {
  std::cout << "The barracuda completely ignores you" << std::endl;
}
void Barracuda::Move(int movement) {
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
bool Barracuda::GetBehavior() {
  return is_wild;
}
int Barracuda::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int Barracuda::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point Barracuda::GetPosition() {
  return position;
}
bool Barracuda::IsLandAnimal() {
  return is_land_animal;
}
bool Barracuda::IsWaterAnimal() {
  return is_water_animal;
}
bool Barracuda::IsAirAnimal() {
  return is_air_animal;
}
bool Barracuda::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool Barracuda::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool Barracuda::IsOmnivore() {
  return eat_meat && eat_plant;
}
bool Barracuda::IsEnemy(int x) {
  return false;
}
int Barracuda::GetID() {
  return ID;
}
void Barracuda::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int Barracuda::GetX() const {
  return position.GetX();
}
int Barracuda::GetY() const {
  return position.GetY();
}