#ifndef TIGER_H
#define TIGER_H

#include <string>
#include <iostream>
#include "../animalfood.h"
#include "../../misc/point.h"

/** @class Tiger
  * Kelas Tiger yang mendefinisikan hewan tiger.
  */
class Tiger {
  public :
    /** @brief Constructor
      * Menciptakan tiger dengan posisi (x,y) dan berat _weight.
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      * @param _weight Nilai berat untuk tiger.
      */
    Tiger(int _x, int _y, int _weight);
    /** @brief Menampilkan interaksi dengan tiger.
      * Menuliskan interaksi ke layar.
      */
    void Interact();
    /** @brief Menggerakkan tiger dengan mengubah posisi.
      * @param movement Nilai menentukan arah gerak tiger.
      */
    void Move(int movement);
    /** @brief Getter nilai is_land_animal.
      * @return Nilai is_land_animal.
      */
    bool IsLandAnimal();
    /** @brief Getter nilai is_water_animal.
      * @return Nilai is_water_animal.
      */
    bool IsWaterAnimal();
    /** @brief Getter nilai is_air_animal.
      * @return Nilai is_air_animal.
      */
    bool IsAirAnimal();
    /** @brief Menentukan apakah tiger merupakan herbivora.
      * @return Nilai true/false tiger merupakan herbivora. 
      */
    bool IsHerbivore();
    /** @brief Menentukan apakah tiger merupakan carnivora.
      * @return Nilai true/false tiger merupakan carnivora. 
      */
    bool IsCarnivore();
    /** @brief Menentukan apakah tiger merupakan omnivora.
      * @return Nilai true/false tiger merupakan omnivora. 
      */
    bool IsOmnivore();
    /** @brief Getter nilai kebutuhan makanan tiger dalam bentuk daging.
      * @return Jumlah daging yang dibutuhkan untuk tiger tertentu.
      */
    int GetReqMeat();
    /** @brief Getter nilai kebutuhan makanan tiger dalam bentuk tumbuhan.
      * @return Jumlah tumbuhan yang dibutuhkan untuk tiger tertentu.
      */
    int GetReqPlant();
    /** @brief Getter nilai point position.
      * @return Nilai position.
      */
    Point GetPosition();
    /** @brief Mengecek status tiger.
      * Memeriksa apakah tiger dengan ID x merupakan musuh.
      * @param x ID tiger yang ingin diperiksa.
      * @return Nilai true/false apakah merupakan musuh.
      */
    bool IsEnemy(int x);
    /** @brief Getter nilai ID.
      * @return Nilai ID.
      */
    int GetID();
    /** @brief Menentukan lokasi tiger.
      * Mengubah lokasi tiger menjadi di posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    void SetLocation(int _x, int _y);
    /** @brief Getter nilai absis
      * @return Nilai absis.
      */
    int GetX() const;
    /** @brief Getter nilai ordinat
      * @return Nilai ordinat.
      */
    int GetY() const;
    /** @brief Getter nilai is_wild. 
      * @return Nilai is_wild.
      */
    bool GetBehavior();
    /** @brief Mengembalikan character untuk proses render.
      * @return Karakter untuk dirender.
      */
    char Render();
    
  private:
    int ID;
    bool is_wild;
    Point position;
    int limb_count;
    std::string skin_type;
    bool is_land_animal;
    bool is_water_animal;
    bool is_air_animal;
    int weight;
    bool eat_meat;
    bool eat_plant;
    int ratio_meat;
    int ratio_plant;
    const int def_ID;
    const int def_limb_count;
    const std::string def_skin_type;
    const bool def_eat_meat;
    const bool def_eat_plant;
    const int def_ratio_meat;
    const int def_ratio_plant;
};

#endif