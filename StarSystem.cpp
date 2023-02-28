#include <StarSystem.h>

StarSystem::StarSystem(unsigned int CountObjects, unsigned int* ObjectIDs, unsigned int QuantityLivePlanets){
    this->setCountObjects(CountObjects);
    this->QuantityLivePlanets = QuantityLivePlanets;
    this->ObjectIDs = new unsigned int [this->getCountObject()];
    for (unsigned int i = 0; i < CountObjects; i++){
        this->ObjectIDs[i] = ObjectIDs[i];
    }
}

StarSystem::~StarSystem(){
    delete[] this->ObjectIDs;
}

