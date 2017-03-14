#ifndef ZOO_H
#define ZOO_H

#include <set>
#include <vector>
#include "animal/aves/colibri.h"
#include "animal/aves/duck.h"
#include "animal/aves/eagle.h"
#include "animal/aves/owl.h"
#include "animal/aves/peacock.h"
#include "animal/aves/wild_colibri.h"
#include "animal/diet/animal_diet.h"
#include "animal/mammalia/elephant.h"
#include "animal/mammalia/giraffe.h"
#include "animal/mammalia/lion.h"
#include "animal/mammalia/monkey.h"
#include "animal/mammalia/tiger.h"
#include "animal/mammalia/wild_bunny.h"
#include "animal/mammalia/wolf.h"
#include "animal/mammalia/zebra.h"
#include "animal/pisces/barracuda.h"
#include "animal/pisces/clownfish.h"
#include "animal/pisces/shark.h"
#include "animal/reptilia/chameleon.h"
#include "animal/reptilia/crocodile.h"
#include "animal/reptilia/iguana.h"
#include "animal/reptilia/komodo.h"
#include "animal/reptilia/python.h"
#include "infrastructure/cage.h"
#include "infrastructure/cell.h"
#include "infrastructure/facility/park.h"
#include "infrastructure/facility/restaurant.h"
#include "infrastructure/facility/road.h"
#include "infrastructure/facility/road_entrance.h"
#include "infrastructure/facility/road_exit.h"
#include "infrastructure/habitat/air_habitat.h"
#include "infrastructure/habitat/habitat.h"
#include "infrastructure/habitat/land_habitat.h"
#include "infrastructure/habitat/water_habitat.h"
#include "misc/person.h"
#include "misc/point.h"

const int WIDTH = 20;
const int LENGTH = 20;

class Zoo {
  public:
    Zoo();
    ~Zoo();
    void SetTile(Cell* c, int i, int j);
    Cell& GetTile(int i, int j);
    void InsertCage(const Cage& c);
    Cage RemoveCage(int i);
    void Render(Person& visitor);
    void Print(int ux = 0, int uy = 0, int lx = LENGTH - 1, int ly = WIDTH - 1);
    void ListAllEntranceExit();
    Cell*** GetMap();
    set<Point>& GetEntrance();
    set<Point>& GetExit();
    vector<Cage>& GetCages();

  private:
    Cell*** map;
    char** map_char;
    vector<Cage> cages;
    set<Point> entrance;
    set<Point> exit;
};

#endif