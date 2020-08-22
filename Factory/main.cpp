#include<iostream>
#include<vector>

#include"Animals.h"
#include"AniFactory.h"
#include"Dog.h"
#include"FactoryDog.h"

int main()
{
    std::vector<Animals*> animal;
    FactoryDog facDog;
    animal.push_back(facDog.makeAnimals("Dog Jerk",1));
    std::cout << animal[0] << '\n';
    std::cout <<"Name of Animals: "<< animal[0]->getName()<<'\n';
    delete[] animal[0];
    return 1;
};


