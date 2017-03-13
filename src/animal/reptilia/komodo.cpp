#include "komodo.h"

Komodo::Komodo(int _x, int _y, int _weight) : def_ID(10),
                                              def_ratio_meat(70),
                                              def_ratio_plant(0),
                                              def_limb_count(4),
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
void Komodo::Interact() {
  std::cout << "The komodo is looking at you intensely" << std::endl;
}
void Komodo::Move(int movement) {
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
bool Komodo::GetBehavior() {
  return is_wild;
}
int Komodo::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int Komodo::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point Komodo::GetPosition() {
  return position;
}
bool Komodo::IsLandAnimal() {
  return is_land_animal;
}
bool Komodo::IsWaterAnimal() {
  return is_water_animal;
}
bool Komodo::IsAirAnimal() {
  return is_air_animal;
}
bool Komodo::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool Komodo::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool Komodo::IsOmnivore() {
  return eat_meat && eat_plant;
}
bool Komodo::IsEnemy(int x) {
  return false;
}
int Komodo::GetID() {
  return ID;
}
void Komodo::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int Komodo::GetX() const {
  return position.GetX();
}
int Komodo::GetY() const {
  return position.GetY();
}
char Komodo::Render() {
  return 'O';
}