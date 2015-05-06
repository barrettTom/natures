#ifndef resource_h
#define resource_h

#include "entity.hpp"
#include "location.hpp"

class Resource: public Entity
{
  public:
    Resource(Window m, std::string s);
    Location getLocation();

  private:
    int amount;
};

#endif
