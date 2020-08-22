

#ifndef FACTORYDOG
#define FACTORYDOG
#include"Animals.h"
#include"Dog.h"
#include"AniFactory.h"

//#define A
class FactoryDog: public AniFactory
{
private:
    /* data */
public:
    #ifdef A
    Dog*makeDog();
    #endif
    Animals *makeAnimals(std::string inName, int inAge);
};


#endif