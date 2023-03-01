#ifndef _MICROOBJECT_
#define _MICROOBJECT_

#include "Object.h"


class MicroObject : public Object {
public:
    unsigned int AffiliationId = -1; //Принадлежность макрообъекту по id
    string AffiliationName = "-1";   //Принадлежность макрообъекту по имени

    void setAffiliationId(unsigned int AffiliationId) { this->AffiliationId = AffiliationId; }
    void setAffiliationName(string AffiliationName) { this->AffiliationName = AffiliationName; }

    unsigned int getAffiliationId(){return AffiliationId;}
    string getAffiliationName() { return AffiliationName; };
};


#endif