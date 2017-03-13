#include "wild_colibri.h"

WildColibri::WildColibri(int _x, int _y, int _weight) : def_ID(21),
                                                      def_ratio_meat(0),
                                                      def_ratio_plant(60),
                                                      def_limb_count(2),
                                                      def_skin_type("Feather"),
                                                      def_eat_meat(false),
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
  AnimalFood::AddTotalPlant(ratio_plant * weight / 100);
  AddEnemy(2);
  AddEnemy(3);
  AddEnemy(9);
  AddEnemy(19);
}
void WildColibri::Interact() {
  std::cout << "The wild colibri is going to skewer your eyes" << std::endl;
}
void WildColibri::Move(int movement) {
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
bool WildColibri::GetBehavior() {
  return is_wild;
}
int WildColibri::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int WildColibri::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point WildColibri::GetPosition() {
  return position;
}
bool WildColibri::IsLandAnimal() {
  return is_land_animal;
}
bool WildColibri::IsWaterAnimal() {
  return is_water_animal;
}
bool WildColibri::IsAirAnimal() {
  return is_air_animal;
}
bool WildColibri::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool WildColibri::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool WildColibri::IsOmnivore() {
  return eat_meat && eat_plant;
}
void WildColibri::AddEnemy(int x) {
  enemy.insert(x);
}
void WildColibri::RemoveEnemy(int x) {
  enemy.erase(x);
}
bool WildColibri::IsEnemy(int x) {
  return false;
}
int WildColibri::GetID() {
  return ID;
}
void WildColibri::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int WildColibri::GetX() const {
  return position.GetX();
}
int WildColibri::GetY() const {
  return position.GetY();
}