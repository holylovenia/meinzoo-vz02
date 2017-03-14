#ifndef ZOO_H
#define ZOO_H

#include <set>
#include <vector>
#include "infrastructure/air_cage.h"
#include "infrastructure/land_cage.h"
#include "infrastructure/water_cage.h"
#include "infrastructure/facility/road.h"
#include "infrastructure/facility/restaurant.h"
#include "infrastructure/facility/park.h"
#include "infrastructure/facility/road_entrance.h"
#include "infrastructure/facility/road_exit.h"
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
    void InsertAirCage(const AirCage& c);
    void InsertWaterCage(const WaterCage& c);
    void InsertLandCage(const LandCage& c);
    AirCage RemoveAirCage(int i);
    WaterCage RemoveWaterCage(int i);
    LandCage RemoveLandCage(int i);
    void Render();
    void Print(int ux = 0, int uy = 0, int lx = LENGTH, int ly = WIDTH);
    int GetTotalReqMeat();
    int GetTotalReqPlant();
    void ListAllEntranceExit();
    void Tour();

  private:
    Cell*** map;
    char** map_char;
    vector<AirCage> air_cage;
    vector<WaterCage> water_cage;
    vector<LandCage> land_cage;
    Person visitor;
    set<Point> entrance;
    set<Point> exit;
};

#endif