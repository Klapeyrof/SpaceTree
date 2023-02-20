#ifndef _GALAXY_
#define _GALAXY_

#include "macroObjects.h"
// #include "Galaxy.cpp"

class Galaxy: public MacroObject{
private:
    string Type;    //тип галактики
    float Height;   //толщина диска галактики в кпк
    uint64_t Luminocity;    //светимость галактики
    uint32_t QuantityStars;
public:
    Galaxy( string name = "NoName",
            unsigned int id = -1,
            double mass = -1,
            double radius = -1,
            double impulse = -1,
            double period_rotation = -1,
            string Type = "NoType",    //тип галактики
            float Height = -1,   //толщина диска галактики в кпк
            uint64_t Luminocity = -1,    //светимость галактики
            uint32_t QuantityStars = -1
            );
    // ~Galaxy();

    void setType(string Type){this->Type = Type;};
    void setHeight(float Height){this->Height = Height;};
    void setLuminocity(uint64_t Luminocity){this->Luminocity = Luminocity;};
    void setQuantityStars(uint32_t QuantityStars){this->QuantityStars = QuantityStars;};

    string getType(){return Type;};
    float getHeight(){return Height;};
    uint64_t getLuminocity(){return Luminocity;};
    uint32_t getQuantityStars(){return QuantityStars;};
};

#endif 