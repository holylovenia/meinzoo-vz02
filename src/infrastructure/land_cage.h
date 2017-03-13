#ifndef LAND_CAGE_H
#define LAND_CAGE_H

#include <set>
#include <vector>
#include "../misc/point.h"
#include "../animal/aves/colibri.h"
#include "../animal/aves/duck.h"
#include "../animal/aves/eagle.h"
#include "../animal/aves/peacock.h"
#include "../animal/aves/wild_colibri.h"
#include "../animal/mammalia/elephant.h"
#include "../animal/mammalia/giraffe.h"
#include "../animal/mammalia/lion.h"
#include "../animal/mammalia/monkey.h"
#include "../animal/mammalia/tiger.h"
#include "../animal/mammalia/wolf.h"
#include "../animal/mammalia/zebra.h"
#include "../animal/mammalia/wild_bunny.h"
#include "../animal/reptilia/chameleon.h"
#include "../animal/reptilia/crocodile.h"
#include "../animal/reptilia/iguana.h"
#include "../animal/reptilia/komodo.h"
#include "../animal/reptilia/python.h"

#define TOTAL_LAND_ANIMAL 18

using namespace std;

class LandCage {
  public:
    LandCage();
    void AddPoint(const Point& p);
    void RemovePoint(const Point& p);
    void AddAnimal(Colibri& A);
    void AddAnimal(Duck& A);
    void AddAnimal(Eagle& A);
    void AddAnimal(Peacock& A);
    void AddAnimal(WildColibri& A);
    void AddAnimal(Elephant& A);
    void AddAnimal(Giraffe& A);
    void AddAnimal(Lion& A);
    void AddAnimal(Monkey& A);
    void AddAnimal(Tiger& A);
    void AddAnimal(Wolf& A);
    void AddAnimal(Zebra& A);
    void AddAnimal(WildBunny& A);
    void AddAnimal(Chameleon& A);
    void AddAnimal(Crocodile& A);
    void AddAnimal(Iguana& A);
    void AddAnimal(Komodo& A);
    void AddAnimal(Python& A);
    void MoveAnimal();
    vector<Point> GetArea();
    
  private:
    set<Point> area;
    vector<Colibri*> colibri;
    vector<Duck*> duck;
    vector<Eagle*> eagle;
    vector<Peacock*> peacock;
    vector<WildColibri*> wild_colibri;
    vector<Elephant*> elephant;
    vector<Giraffe*> giraffe;
    vector<Lion*> lion;
    vector<Monkey*> monkey;
    vector<Tiger*> tiger;
    vector<Wolf*> wolf;
    vector<Zebra*> zebra;
    vector<WildBunny*> wild_bunny;
    vector<Chameleon*> chameleon;
    vector<Crocodile*> crocodile;
    vector<Iguana*> iguana;
    vector<Komodo*> komodo;
    vector<Python*> python;
    int nb_animal;
};

#endif