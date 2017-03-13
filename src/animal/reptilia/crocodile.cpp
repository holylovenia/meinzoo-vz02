#include "crocodile.h"

Crocodile::Crocodile(int _x, int _y, int _weight) : def_ID(8),
                                                    def_ratio_meat(60),
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
  is_water_animal = true;
  is_air_animal = false;
  weight = _weight;
  is_wild = false;
  eat_meat = def_eat_meat;
  eat_plant = def_eat_plant;
  AnimalFood::AddTotalMeat(ratio_meat * weight / 100);
}

void Crocodile::Interact() {
  std::cout << "The crocodile is laying still on a slab of rock" << std::endl;
}

void Crocodile::Move(int movement) {
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

bool Crocodile::GetBehavior() {
  return is_wild;
}

int Crocodile::GetReqMeat() {
  return ratio_meat * weight / 100;
}

int Crocodile::GetReqPlant() {
  return ratio_plant * weight / 100;
}

Point Crocodile::GetPosition() {
  return position;
}

bool Crocodile::IsLandAnimal() {
  return is_land_animal;
}

bool Crocodile::IsWaterAnimal() {
  return is_water_animal;
}

bool Crocodile::IsAirAnimal() {
  return is_air_animal;
}

bool Crocodile::IsHerbivore() {
  return !eat_meat && eat_plant;
}

bool Crocodile::IsCarnivore() {
  return eat_meat && !eat_plant;
}

bool Crocodile::IsOmnivore() {
  return eat_meat && eat_plant;
}

bool Crocodile::IsEnemy(int x) {
  return false;
}

int Crocodile::GetID() {
  return ID;
}

void Crocodile::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}

int Crocodile::GetX() const {
  return position.GetX();
}

int Crocodile::GetY() const {
  return position.GetY();
}