#ifndef _STARSYSTEM_
#define _STARSYSTEM_

#include "macroObjects.h"

class StarSystem: public MacroObject{
private:
    // Stars stars[]; //must do it
    // Planets planets[]
    unsigned int QuantityLivePlanets;   //планеты, приголные для жизни
public:
    StarSystem();
    ~StarSystem();

    void setQuantityLivePlanets(unsigned int QP){this->QuantityLivePlanets = QP;};
    unsigned int getQuantityLivePlanets(){return QuantityLivePlanets;};
};

#endif