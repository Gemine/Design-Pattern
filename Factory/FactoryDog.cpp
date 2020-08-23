#include "FactoryDog.h"
#ifdef A
Dog* FactoryDog::makeDog()
{
    Dog *dog = new Dog;
    return dog;
};
#endif
Animals* FactoryDog::makeAnimals(std::string inName, int inAge)
{
    Animals *dog = new Dog;
    //std::cout<< dog << '\n';
    dog->setName(inName);
    dog->setAge(inAge);
    return dog;
}