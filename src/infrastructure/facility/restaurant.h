#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>

class Restaurant {
  public:
    // ctor with parameter
    Restaurant(bool accessible, std::string _name);
    // cctor
    Restaurant(const Restaurant& R);
    // operator=
    Restaurant& operator=(const Restaurant& R);
    // dtor
    std::string GetRestaurantName();

  private:
    std::string name;
    bool is_accessible;
    std::string facility_type;
    const std::string def_facility_type;
};

#endif