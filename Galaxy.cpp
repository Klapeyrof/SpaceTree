#include "Galaxy.h"

Galaxy::Galaxy( string name = "NoName",
            unsigned int id = -1,
            double mass = -1,
            double radius = -1,
            double impulse = -1,
            double period_rotation = -1,
            string Type = "NoType",    //тип галактики
            float Height = -1,   //толщина диска галактики в кпк
            uint64_t Luminocity = -1,    //светимость галактики
            uint32_t QuantityStars = -1
){
    this->Name = name;
    this->ID = id;
    this->Mass = mass;
    this->Radius = radius;
    this->Impulse = impulse;
    this->Period_rotation = period_rotation;
    this->Type = Type;
    this->Height = Height;
    this->Luminocity = Luminocity;
    this->QuantityStars = QuantityStars;
}