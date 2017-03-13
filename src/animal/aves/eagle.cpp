#include "eagle.h"

Eagle::Eagle(int _x, int _y, int _weight) : def_ID(18),
                                            def_ratio_meat(60),
                                            def_ratio_plant(0),
                                            def_limb_count(2),
                                            def_skin_type("Feather"),
                                            def_eat_meat(true),
                                            def_eat_plant(false) {
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
  AnimalFood::AddTotalMeat(ratio_plant * weight / 100);
}
void Eagle::Interact() {
  std::cout << "The eagle is roosting majestically on a tree" << std::endl;
}
void Eagle::Move(int movement) {
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
bool Eagle::GetBehavior() {
  return is_wild;
}
int Eagle::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int Eagle::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point Eagle::GetPosition() {
  return position;
}
bool Eagle::IsLandAnimal() {
  return is_land_animal;
}
bool Eagle::IsWaterAnimal() {
  return is_water_animal;
}
bool Eagle::IsAirAnimal() {
  return is_air_animal;
}
bool Eagle::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool Eagle::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool Eagle::IsOmnivore() {
  return eat_meat && eat_plant;
}
bool Eagle::IsEnemy(int x) {
  return false;
}
int Eagle::GetID() {
  return ID;
}
void Eagle::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int Eagle::GetX() const {
  return position.GetX();
}
int Eagle::GetY() const {
  return position.GetY();
}