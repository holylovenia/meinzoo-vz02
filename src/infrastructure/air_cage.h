#ifndef AIR_CAGE_H
#define AIR_CAGE_H

#include <set>
#include <vector>
#include "../misc/point.h"
#include "../animal/aves/colibri.h"
#include "../animal/aves/duck.h"
#include "../animal/aves/eagle.h"
#include "../animal/aves/owl.h"
#include "../animal/aves/wild_colibri.h"

#define TOTAL_AIR_ANIMAL 5

using namespace std;

class AirCage {
  public:
    AirCage();
    void AddPoint(const Point& p);
    void RemovePoint(const Point& p);
    void AddAnimal(Colibri& A);
    void AddAnimal(Duck& A);
    void AddAnimal(Eagle& A);
    void AddAnimal(Owl& A);
    void AddAnimal(WildColibri& A);
    void MoveAnimal();
    vector<Point> GetArea();
  private:
    set<Point> area;
    vector<Colibri*> colibri;
    vector<Duck*> duck;
    vector<Eagle*> eagle;
    vector<Owl*> owl;
    vector<WildColibri*> wild_colibri;
    int nb_animal;
};

#endif