#ifndef CELL_H
#define CELL_H

#include <string>

/** @class Cell
  * Kelas Cell yang mendefinisikan aksesibilitas suatu cell.
  */
class Cell {
  public:
    /** @brief Constructor
      * Menciptakan cell sesuai dengan parameter.
      * Semua habitat tidak bisa diakses (not is_accessible).
      * Road dan semua habitat memiliki nama "" (string kosong).
      * Parameter _entrance dan _exit hanya boleh true saat _type adalah Road.
      * @param _accessible Nilai true/false cell dapat diakses.
      * @param _type Tipe cell.
      * @param _name Nama fasilitas cell.
      * @param _entrance Nilai true/false cell merupakan entrance.
      * @param _exit Nilai true/false cell merupakan exit.
      */
    Cell(bool _accessible, std::string _type,
                           std::string _name,
                           bool _entrance,
                           bool _exit);
    /** @brief Copy Constructor
      * Menciptakan cell yang sama dengan cell yang sudah ada.
      * @param C Objek cell yang telah diciptakan.
      */
    Cell(Cell& C);
    /** @brief Getter nilai is_accessible.
      * @return Nilai is_accessible.
      */
    bool IsAccessible() const;
    /** @brief Getter nilai facility_type.
      * @return Nilai facility_type.
      */
    std::string GetType() const;
    /** @brief Getter nilai name.
      * @return Nilai name.
      */
    std::string GetName() const;
    /** @brief Getter nilai is_entrance.
      * @return Nilai is_entrance.
      */
    bool IsEntrance() const;
    /** @brief Getter nilai is_exit.
      * @return Nilai is_exit.
      */
    bool IsExit() const;
    /** @brief Mengembalikan character untuk proses render.
      * @return Karakter untuk dirender.
      */
    char Render();

  protected:
    bool is_accessible;
    std::string type;
    std::string name;
    bool is_entrance;
    bool is_exit;
};

#endif