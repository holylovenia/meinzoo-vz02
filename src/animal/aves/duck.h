#ifndef DUCK_H
#define DUCK_H

#include <string>
#include <iostream>
#include "../animalfood.h"
#include "../../misc/point.h"

class Duck {
  public :
    Duck(int _x, int _y, int _weight);
    void Interact();
    void Move(int movement);
    bool IsLandAnimal();
    bool IsWaterAnimal();
    bool IsAirAnimal();
    bool IsHerbivore();
    bool IsCarnivore();
    bool IsOmnivore();
    int GetReqMeat();
    int GetReqPlant();
    Point GetPosition();
    bool IsEnemy(int x);
    int GetID();
    void SetLocation(int _x, int _y);
    int GetX() const;
    int GetY() const;
    bool GetBehavior();
    
  private:
    int ID;
    bool is_wild;
    Point position;
    int limb_count;
    std::string skin_type;
    bool is_land_animal;
    bool is_water_animal;
    bool is_air_animal;
    int weight;
    bool eat_meat;
    bool eat_plant;
    int ratio_meat;
    int ratio_plant;
    const int def_ID;
    const int def_limb_count;
    const std::string def_skin_type;
    const bool def_eat_meat;
    const bool def_eat_plant;
    const int def_ratio_meat;
    const int def_ratio_plant;
};

#endif