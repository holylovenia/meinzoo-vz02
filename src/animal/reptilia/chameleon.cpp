#include "chameleon.h"

Chameleon::Chameleon(int _x, int _y, int _weight) : def_ID(12),
                                                    def_ratio_meat(20),
                                                    def_ratio_plant(50),
                                                    def_limb_count(4),
                                                    def_skin_type("Scute"),
                                                    def_eat_meat(true),
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
  AnimalFood::AddTotalMeat(ratio_meat * weight / 100);
  AnimalFood::AddTotalPlant(ratio_plant * weight / 100);
}
void Chameleon::Interact() {
  std::cout << "The chameleon can be barely seen" << std::endl;
}
void Chameleon::Move(int movement) {
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
bool Chameleon::GetBehavior() {
  return is_wild;
}
int Chameleon::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int Chameleon::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point Chameleon::GetPosition() {
  return position;
}
bool Chameleon::IsLandAnimal() {
  return is_land_animal;
}
bool Chameleon::IsWaterAnimal() {
  return is_water_animal;
}
bool Chameleon::IsAirAnimal() {
  return is_air_animal;
}
bool Chameleon::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool Chameleon::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool Chameleon::IsOmnivore() {
  return eat_meat && eat_plant;
}
bool Chameleon::IsEnemy(int x) {
  return false;
}
int Chameleon::GetID() {
  return ID;
}
void Chameleon::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int Chameleon::GetX() const {
  return position.GetX();
}
int Chameleon::GetY() const {
  return position.GetY();
}