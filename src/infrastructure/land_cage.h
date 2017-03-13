#ifndef LAND_CAGE_H
#define LAND_CAGE_H

#include <set>
#include <vector>
#include "../misc/point.h"
#include "../animal/aves/colibri.h"
#include "../animal/aves/duck.h"
#include "../animal/aves/eagle.h"
#include "../animal/aves/owl.h"
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

#define TOTAL_LAND_ANIMAL 19

using namespace std;

/** @class LandCage
  * Kelas LandCage yang berisi hewan dengan habitat darat.
  */
class LandCage {
  public:
    /** @brief Constructor
      * Menciptakan LandCage kosong dan tanpa area.
      */
    LandCage();
    /** @brief Menambah area LandCage
      * Menambahkan habitat darat di point p sebagai area dari LandCage.
      * @param p Lokasi yang ingin ditambahkan.
      */
    void AddPoint(const Point& p);
    /** @brief Mengurangi area LandCage
      * Menghilangkan point p dari area LandCage.
      * @param p Lokasi yang ingin dihilangkan.
      */
    void RemovePoint(const Point& p);
    /** @brief Menambahkan colibri
      * Menambahkan hewan colibri A ke dalam LandCage.
      * @param A Colibri yang telah diciptakan.
      */
    void AddAnimal(Colibri& A);
    /** @brief Menambahkan duck
      * Menambahkan hewan duck A ke dalam LandCage.
      * @param A Duck yang telah diciptakan.
      */
    void AddAnimal(Duck& A);
    /** @brief Menambahkan eagle
      * Menambahkan hewan eagle A ke dalam LandCage.
      * @param A Eagle yang telah diciptakan.
      */
    void AddAnimal(Eagle& A);
    /** @brief Menambahkan owl
      * Menambahkan hewan owl A ke dalam LandCage.
      * @param A Owl yang telah diciptakan.
      */
    void AddAnimal(Owl& A);
    /** @brief Menambahkan peacock
      * Menambahkan hewan peacock A ke dalam LandCage.
      * @param A Peacock yang telah diciptakan.
      */
    void AddAnimal(Peacock& A);
    /** @brief Menambahkan wild colibri
      * Menambahkan hewan wild colibri A ke dalam LandCage.
      * @param A Wild colibri yang telah diciptakan.
      */
    void AddAnimal(WildColibri& A);
    /** @brief Menambahkan elephant
      * Menambahkan hewan elephant A ke dalam LandCage.
      * @param A Peacock yang telah diciptakan.
      */
    void AddAnimal(Elephant& A);
    /** @brief Menambahkan giraffe
      * Menambahkan hewan giraffe A ke dalam LandCage.
      * @param A Peacock yang telah diciptakan.
      */
    void AddAnimal(Giraffe& A);
    /** @brief Menambahkan lion
      * Menambahkan hewan lion A ke dalam LandCage.
      * @param A Peacock yang telah diciptakan.
      */
    void AddAnimal(Lion& A);
    /** @brief Menambahkan monkey
      * Menambahkan hewan monkey A ke dalam LandCage.
      * @param A Peacock yang telah diciptakan.
      */
    void AddAnimal(Monkey& A);
    /** @brief Menambahkan tiger
      * Menambahkan hewan tiger A ke dalam LandCage.
      * @param A Peacock yang telah diciptakan.
      */
    void AddAnimal(Tiger& A);
    /** @brief Menambahkan wolf
      * Menambahkan hewan wolf A ke dalam LandCage.
      * @param A Peacock yang telah diciptakan.
      */
    void AddAnimal(Wolf& A);
    /** @brief Menambahkan zebra
      * Menambahkan hewan zebra A ke dalam LandCage.
      * @param A Peacock yang telah diciptakan.
      */
    void AddAnimal(Zebra& A);
    /** @brief Menambahkan wild bunny
      * Menambahkan hewan wild bunny A ke dalam LandCage.
      * @param A Peacock yang telah diciptakan.
      */
    void AddAnimal(WildBunny& A);
    /** @brief Menambahkan chameleon
      * Menambahkan hewan chameleon A ke dalam LandCage.
      * @param A Peacock yang telah diciptakan.
      */
    void AddAnimal(Chameleon& A);
    /** @brief Menambahkan crocodile
      * Menambahkan hewan crocodile A ke dalam LandCage.
      * @param A Peacock yang telah diciptakan.
      */
    void AddAnimal(Crocodile& A);
    /** @brief Menambahkan iguana
      * Menambahkan hewan iguana A ke dalam LandCage.
      * @param A Peacock yang telah diciptakan.
      */
    void AddAnimal(Iguana& A);
    /** @brief Menambahkan komodo
      * Menambahkan hewan komodo A ke dalam LandCage.
      * @param A Peacock yang telah diciptakan.
      */
    void AddAnimal(Komodo& A);
    /** @brief Menambahkan python
      * Menambahkan hewan python A ke dalam LandCage.
      * @param A Peacock yang telah diciptakan.
      */
    void AddAnimal(Python& A);
    /** @brief Menggerakkan semua animal di dalam LandCage.
      * Akan dicek agar animal tidak keluar dari LandCage.
      */
    void MoveAnimal();
    /** @brief Getter area cage.
      * @return Set of point yang menyatakan area cage.
      */
    set<Point> GetArea();
    /** @brief Mengembalikan character untuk proses render.
      * @return Karakter untuk dirender.
      */
    char Render();
    
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
    vector<Owl*> owl;
    int nb_animal;
};

#endif