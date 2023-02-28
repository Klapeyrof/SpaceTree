#ifndef _STARSYSTEM_
#define _STARSYSTEM_

#include "macroObjects.h"

class StarSystem: public MacroObject{
private:
    unsigned int* ObjectIDs = NULL;    //объекты в системе
    unsigned int QuantityLivePlanets;   //планеты, пригодные для жизни
public:
    StarSystem(unsigned int CountObjects, unsigned int* ObjectIDs, unsigned int QuantityLivePlanets);
    ~StarSystem();

    void setQuantityLivePlanets(unsigned int QP){this->QuantityLivePlanets = QP;};
    unsigned int getQuantityLivePlanets(){return QuantityLivePlanets;};
};

#endif