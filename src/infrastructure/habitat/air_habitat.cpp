#include "air_habitat.h"

AirHabitat::AirHabitat(): def_type('A'), def_accessible(false) {
  type = def_type;
  is_accessible = def_accessible;
}