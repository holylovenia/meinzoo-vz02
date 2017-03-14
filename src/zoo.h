#ifndef ZOO_H
#define ZOO_H

#include <set>
#include <vector>
#include "animal/animal.h"
#include "infrastructure/cage.h"
#include "infrastructure/cell.h"
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
    void Render(const Person& visitor);
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