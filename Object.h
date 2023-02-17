#ifndef MIPT_OBJECT_H
#define MIPT_OBJECT_H

#include <iostream>
using namespace std;

class Object {
public:
    Object() {};
    virtual ~Object(){};
protected:

    string name;
    unsigned int gravity_system;
    unsigned int id;
    double mass;
    double radius;
    double impulse = -1;
    double period_rotation = 0;

};

#endif //MIPT_OBJECT_H
