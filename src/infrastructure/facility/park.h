#ifndef PARK_H
#define PARK_H

#include <string>
class Park {
  public:
    Park(bool accessible, std::string _name);
    Park(const Park& P);
    Park& operator=(const Park& P);
    std::string GetParkName();

  private:
    std::string name;
    bool is_accessible;
    std::string facility_type;
    const std::string def_facility_type;
};

#endif