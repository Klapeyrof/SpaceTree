#ifndef MIPT_OBJECT_H
#define MIPT_OBJECT_H

#include <iostream>
using namespace std;

class Object {
public:
    // Object() {};
    // virtual ~Object(){};
    void setName(string Name){this->Name = Name;};
    void setGravitySystem(unsigned int){this->Gravity_system = Gravity_system;};
    void setID(unsigned int ID){this->ID = ID;};
    void setMass(double Mass){this->Mass = Mass;};
    void setRadius(double Radius){this->Radius = Radius;};
    void setImpulse(double Impulse){this->Impulse = Impulse;};
    void setPeriodRotation(double Period_rotation){this->Period_rotation = Period_rotation;};

    string getName(){return Name;};
    unsigned int getGravity_system(){return Gravity_system;};
    unsigned int getID(){return ID;};
    double getMass(){return Mass;};
    double getRadius(){return Radius;};
    double getImpulse(){return Impulse;};
    double getPeriod_rotation(){return Period_rotation;};
protected:

    string Name;
    unsigned int Gravity_system;
    unsigned int ID;
    double Mass;
    double Radius;
    double Impulse = -1;
    double Period_rotation = 0;

};

#endif //MIPT_OBJECT_H
