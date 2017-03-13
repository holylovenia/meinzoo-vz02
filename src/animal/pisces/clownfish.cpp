#include "clownfish.h"

Clownfish::Clownfish(int _x, int _y, int _weight) : def_ID(14),
                                                    def_ratio_meat(30),
                                                    def_ratio_plant(40),
                                                    def_limb_count(0),
                                                    def_skin_type("Scale"),
                                                    def_eat_meat(true),
                                                    def_eat_plant(true) {
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
  AnimalFood::AddTotalPlant(ratio_plant * weight / 100);
}

void Clownfish::Interact() {
  std::cout << "The clownfish is not as funny as its name..." << std::endl;
}

void Clownfish::Move(int movement) {
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

bool Clownfish::GetBehavior() {
  return is_wild;
}

int Clownfish::GetReqMeat() {
  return ratio_meat * weight / 100;
}

int Clownfish::GetReqPlant() {
  return ratio_plant * weight / 100;
}

Point Clownfish::GetPosition() {
  return position;
}

bool Clownfish::IsLandAnimal() {
  return is_land_animal;
}

bool Clownfish::IsWaterAnimal() {
  return is_water_animal;
}

bool Clownfish::IsAirAnimal() {
  return is_air_animal;
}

bool Clownfish::IsHerbivore() {
  return !eat_meat && eat_plant;
}

bool Clownfish::IsCarnivore() {
  return eat_meat && !eat_plant;
}

bool Clownfish::IsOmnivore() {
  return eat_meat && eat_plant;
}

bool Clownfish::IsEnemy(int x) {
  return false;
}

int Clownfish::GetID() {
  return ID;
}

void Clownfish::SetLocation(int _x, int _y) {
  position.SetX(_x);
  position.SetY(_y);
}

int Clownfish::GetX() const {
  return position.GetX();
}

int Clownfish::GetY() const {
  return position.GetY();
}