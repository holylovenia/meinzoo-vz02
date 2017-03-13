#include "colibri.h"

Colibri::Colibri(int _x, int _y, int _weight) : def_ID(19),
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
  is_water_animal = false;
  is_air_animal = true;
  weight = _weight;
  is_wild = false;
  eat_meat = def_eat_meat;
  eat_plant = def_eat_plant;
  AnimalFood::AddTotalPlant(ratio_plant * weight / 100);
}
void Colibri::Interact() {
  std::cout << "The colibri is looking at you, apparently confused" << std::endl;
}
void Colibri::Move(int movement) {
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
bool Colibri::GetBehavior() {
  return is_wild;
}
int Colibri::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int Colibri::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point Colibri::GetPosition() {
  return position;
}
bool Colibri::IsLandAnimal() {
  return is_land_animal;
}
bool Colibri::IsWaterAnimal() {
  return is_water_animal;
}
bool Colibri::IsAirAnimal() {
  return is_air_animal;
}
bool Colibri::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool Colibri::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool Colibri::IsOmnivore() {
  return eat_meat && eat_plant;
}
bool Colibri::IsEnemy(int x) {
  return false;
}
int Colibri::GetID() {
  return ID;
}
void Colibri::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int Colibri::GetX() const {
  return position.GetX();
}
int Colibri::GetY() const {
  return position.GetY();
}
char Colibri::Render() {
  return 'O';
}