#include "shark.h"

Shark::Shark(int _x, int _y, int _weight) : def_ID(13),
																						def_ratio_meat(70),
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

void Shark::Interact() {
	std::cout << "The shark is staring at you menacingly" << std::endl;
}

void Shark::Move(int movement) {
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

bool Shark::GetBehavior() {
  return is_wild;
}

int Shark::GetReqMeat() {
  return ratio_meat * weight / 100;
}

int Shark::GetReqPlant() {
  return ratio_plant * weight / 100;
}

Point Shark::GetPosition() {
  return position;
}

bool Shark::IsLandAnimal() {
  return is_land_animal;
}

bool Shark::IsWaterAnimal() {
  return is_water_animal;
}

bool Shark::IsAirAnimal() {
  return is_air_animal;
}

bool Shark::IsHerbivore() {
  return !eat_meat && eat_plant;
}

bool Shark::IsCarnivore() {
  return eat_meat && !eat_plant;
}

bool Shark::IsOmnivore() {
  return eat_meat && eat_plant;
}

bool Shark::IsEnemy(int x) {
  return false;
}

int Shark::GetID() {
  return ID;
}

void Shark::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}

int Shark::GetX() const {
  return position.GetX();
}

int Shark::GetY() const {
  return position.GetY();
}