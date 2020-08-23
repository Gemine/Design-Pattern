#include<iostream>
#include<vector>

#include"Animals.h"
#include"AniFactory.h"
#include"Dog.h"
#include"FactoryDog.h"
#include"Subject.h"
#include"Define.h"
int main()
{
    std::vector<Animals*> animal;
    FactoryDog facDog;
    Subject *OneSubject = new Subject;
    //std::cout << "Check"<<'\n';
    animal.push_back(facDog.makeAnimals("Dog Jerk",1));
    animal.push_back(facDog.makeAnimals("Dog Mickey",1));
    //std::cout << "Check"<<'\n';
    OneSubject->subscribe(SUBJECTKEY::SUBJECT_DOG,animal[0]);
    OneSubject->subscribe(SUBJECTKEY::SUBJECT_DOG,animal[1]);
    animal[0]->subcribeSubject(OneSubject);
    animal[1]->subcribeSubject(OneSubject);

    std::cout << animal[0]->getHappyIndex() <<'\n';
    animal[0]->sound();
    std::cout << animal[0]->getHappyIndex() <<'\n';
    std::cout << animal[1]->getHappyIndex() <<'\n';


    delete[] animal[0];
    delete[] animal[1];
    delete[] OneSubject;
    return 1;
};


