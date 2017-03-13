#ifndef PARK_H
#define PARK_H

#include <string>
class Park {
  public:
    // ctor with parameter
    Park(bool accessible, std::string _name);
    // cctor
    Park(const Park& P);
    // operator=
    Park& operator=(const Park& P);
    // others
    std::string GetParkName();

  private:
    std::string name;
    bool is_accessible;
    std::string facility_type;
    const std::string def_facility_type;
};

#endif