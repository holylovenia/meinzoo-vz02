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

/** @class AirCage
  * Kelas AirCage yang berisi hewan dengan habitat udara.
  */
class AirCage {
  public:
    /** @brief Constructor
      * Menciptakan AirCage kosong dan tanpa area.
      */
    AirCage();
    /** @brief Menambah area AirCage
      * Menambahkan habitat udara di point p sebagai area dari AirCage.
      * @param p Lokasi yang ingin ditambahkan.
      */
    void AddPoint(const Point& p);
    /** @brief Mengurangi area AirCage
      * Menghilangkan point p dari area AirCage.
      * @param p Lokasi yang ingin dihilangkan.
      */
    void RemovePoint(const Point& p);
    /** @brief Menambahkan colibri
      * Menambahkan hewan colibri A ke dalam AirCage.
      * @param A Colibri yang telah diciptakan.
      */
    void AddAnimal(Colibri& A);
    /** @brief Menambahkan duck
      * Menambahkan hewan duck A ke dalam AirCage.
      * @param A Duck yang telah diciptakan.
      */
    void AddAnimal(Duck& A);
    /** @brief Menambahkan eagle
      * Menambahkan hewan eagle A ke dalam AirCage.
      * @param A Eagle yang telah diciptakan.
      */
    void AddAnimal(Eagle& A);
    /** @brief Menambahkan owl
      * Menambahkan hewan owl A ke dalam AirCage.
      * @param A Owl yang telah diciptakan.
      */
    void AddAnimal(Owl& A);
    /** @brief Menambahkan wild colibri
      * Menambahkan hewan wild colibri A ke dalam AirCage.
      * @param A Wild colibri yang telah diciptakan.
      */
    void AddAnimal(WildColibri& A);
    /** @brief Menggerakkan semua animal di dalam AirCage.
      * Akan dicek agar animal tidak keluar dari AirCage.
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
    vector<Owl*> owl;
    vector<WildColibri*> wild_colibri;
    int nb_animal;
};

#endif