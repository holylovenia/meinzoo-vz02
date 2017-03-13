#include "wild_bunny.h"

WildBunny::WildBunny(int _x, int _y, int _weight) : def_ID(0),
                                                    def_ratio_meat(0),
                                                    def_ratio_plant(90),
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
  for (int id = def_ID; id <= 21; id++) {
    AddEnemy(id);
  }
}
void WildBunny::Interact() {
  std::cout << "The wild bunny is looking at you ";
  std::cout << "with murderous intent" << std::endl;
}
void WildBunny::Move(int movement) {
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
bool WildBunny::GetBehavior() {
  return is_wild;
}
int WildBunny::GetReqMeat() {
  return ratio_meat * weight / 100;
}
int WildBunny::GetReqPlant() {
  return ratio_plant * weight / 100;
}
Point WildBunny::GetPosition() {
  return position;
}
bool WildBunny::IsLandAnimal() {
  return is_land_animal;
}
bool WildBunny::IsWaterAnimal() {
  return is_water_animal;
}
bool WildBunny::IsAirAnimal() {
  return is_air_animal;
}
bool WildBunny::IsHerbivore() {
  return !eat_meat && eat_plant;
}
bool WildBunny::IsCarnivore() {
  return eat_meat && !eat_plant;
}
bool WildBunny::IsOmnivore() {
  return eat_meat && eat_plant;
}
void WildBunny::AddEnemy(int x) {
  enemy.insert(x);
}
void WildBunny::RemoveEnemy(int x) {
  enemy.erase(x);
}
bool WildBunny::IsEnemy(int x) {
  return false;
}
int WildBunny::GetID() {
  return ID;
}
void WildBunny::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}
int WildBunny::GetX() const {
  return position.GetX();
}
int WildBunny::GetY() const {
  return position.GetY();
}
char WildBunny::Render() {
  return 'O';
}