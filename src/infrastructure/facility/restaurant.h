#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>

class Restaurant {
  public:
    Restaurant(bool accessible, std::string _name);
    Restaurant(const Restaurant& R);
    Restaurant& operator=(const Restaurant& R);
    std::string GetRestaurantName();
    char Render();

  private:
    std::string name;
    bool is_accessible;
    std::string facility_type;
    const std::string def_facility_type;
};

#endif