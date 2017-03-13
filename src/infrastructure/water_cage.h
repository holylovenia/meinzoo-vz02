#ifndef WATER_CAGE_H
#define WATER_CAGE_H

#include <set>
#include <vector>
#include "../misc/point.h"
#include "../animal/aves/duck.h"
#include "../animal/pisces/shark.h"
#include "../animal/pisces/barracuda.h"
#include "../animal/pisces/clownfish.h"
#include "../animal/reptilia/crocodile.h"

#define TOTAL_WATER_ANIMAL 4

using namespace std;

/** @class WaterCage
  * Kelas WaterCage yang berisi hewan dengan habitat air.
  */
class WaterCage {
  public:
    /** @brief Constructor
      * Menciptakan WaterCage kosong dan tanpa area.
      */
    WaterCage();
    /** @brief Menambah area WaterCage
      * Menambahkan habitat air di point p sebagai area dari WaterCage.
      * @param p Lokasi yang ingin ditambahkan.
      */
    void AddPoint(const Point& p);
    /** @brief Mengurangi area WaterCage
      * Menghilangkan point p dari area WaterCage.
      * @param p Lokasi yang ingin dihilangkan.
      */
    void RemovePoint(const Point& p);
    /** @brief Menambahkan duck
      * Menambahkan hewan duck A ke dalam WaterCage.
      * @param A Duck yang telah diciptakan.
      */
    void AddAnimal(Duck& A);
    /** @brief Menambahkan shark
      * Menambahkan hewan shark A ke dalam WaterCage.
      * @param A Shark yang telah diciptakan.
      */
    void AddAnimal(Shark& A);
    /** @brief Menambahkan barracuda
      * Menambahkan hewan barracuda A ke dalam WaterCage.
      * @param A Barracuda yang telah diciptakan.
      */
    void AddAnimal(Barracuda& A);
    /** @brief Menambahkan clownfish
      * Menambahkan hewan clownfish A ke dalam WaterCage.
      * @param A Clownfish yang telah diciptakan.
      */
    void AddAnimal(Clownfish& A);
    /** @brief Menambahkan crocodile
      * Menambahkan hewan crocodile A ke dalam WaterCage.
      * @param A Crocodile yang telah diciptakan.
      */
    void AddAnimal(Crocodile& A);
    /** @brief Menggerakkan semua animal di dalam WaterCage.
      * Akan dicek agar animal tidak keluar dari WaterCage.
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
    vector<Duck*> duck;
    vector<Shark*> shark;
    vector<Barracuda*> barracuda;
    vector<Clownfish*> clownfish;
    vector<Crocodile*> crocodile;
    int nb_animal;
};

#endif