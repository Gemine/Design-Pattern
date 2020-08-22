

#ifndef ANIMALFACTORY
#define ANIMALFACTORY
#include"Animals.h"
class AniFactory
{
private:
    /* data */
protected:

public:
    virtual Animals *makeAnimals(std::string, int)=0;
};


#endif