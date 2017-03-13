#ifndef WATER_CAGE_H
#define WATER_CAGE_H

#include <set>
#include <vector>
#include "../misc/point.h"
#include "../animal/pisces/shark.h"
#include "../animal/pisces/barracuda.h"
#include "../animal/pisces/clownfish.h"
#include "../animal/reptilia/crocodile.h"

#define TOTAL_WATER_ANIMAL 4

using namespace std;

class WaterCage {
  public:
    WaterCage();
    void AddPoint(const Point& p);
    void RemovePoint(const Point& p);
    void AddAnimal(Shark& A);
    void AddAnimal(Barracuda& A);
    void AddAnimal(Clownfish& A);
    void AddAnimal(Crocodile& A);
    void MoveAnimal();
    vector<Point> GetArea();
    
  private:
    set<Point> area;
    vector<Shark*> shark;
    vector<Barracuda*> barracuda;
    vector<Clownfish*> clownfish;
    vector<Crocodile*> crocodile;
    int nb_animal;
};

#endif