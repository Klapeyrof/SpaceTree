#ifndef _MACROOBGECT_
#define _MACROOBGECT_

#include "Object.h"
// #include "macroObjects.cpp"

using namespace std;

class  MacroObject: public Object{
private:
    unsigned int CountObjects;

public:
    void setcountObjects(unsigned int CountObjects);
};


#endif