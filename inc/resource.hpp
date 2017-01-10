#ifndef resource_h
#define resource_h

#include "entity.hpp"
#include "location.hpp"

class Resource: public Entity
{
  public:
    Resource(Window m, int size);
    Resource(Window m, int size, Location z);
    void eat();

    Location getLocation(){return L;};
    int getAmount(){return amount;};

  private:
    int amount;
};

#endif
