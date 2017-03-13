// File: water_habitat.cpp

#include "water_habitat.h"

WaterHabitat::WaterHabitat(): def_type('W'), def_accessible(false) {
  type = def_type;
  is_accessible = def_accessible;
}