#include "land_habitat.h"

LandHabitat::LandHabitat(): def_type('L'), def_accessible(false) {
  type = def_type;
  is_accessible = def_accessible;
}