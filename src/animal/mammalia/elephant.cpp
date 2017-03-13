#include "elephant.h"

Elephant::Elephant(int _x, int _y, int _weight) : def_ID(7),
                                                  def_ratio_meat(0),
                                                  def_ratio_plant(80),
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
void Elephant::Interact() {
	std::cout << "The elephant is playing with its own trunk" << std::endl;
}
void Elephant::Move(int movement) {
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
bool Elephant::GetBehavior() {
  return is_wild;
}
int Elephant::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int Elephant::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point Elephant::GetPosition() {
  return position;
}
bool Elephant::IsLandAnimal() {
  return is_land_animal;
}
bool Elephant::IsWaterAnimal() {
  return is_water_animal;
}
bool Elephant::IsAirAnimal() {
  return is_air_animal;
}
bool Elephant::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool Elephant::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool Elephant::IsOmnivore() {
  return eat_meat && eat_plant;
}
bool Elephant::IsEnemy(int x) {
  return false;
}
int Elephant::GetID() {
  return ID;
}
void Elephant::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int Elephant::GetX() const {
  return position.GetX();
}
int Elephant::GetY() const {
  return position.GetY();
}