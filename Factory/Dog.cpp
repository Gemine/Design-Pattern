#include"Dog.h"
#include "Define.h"
void Dog::testType()
{
    std::cout << "This is a Dog" << '\n';
};

void Dog::testType1()
{
    std::cout << "This is test type 1" << '\n';
};

void Dog::setName(std::string inName)
{
    Dog::name = inName;
};

void Dog::setAge(int inAge)
{
    Dog::age = inAge;
};

std::string Dog::getName()
{
    return Dog::name;
};

void Dog::update(SUBJECTKEY subjectkey)
{
    
    if(subjectkey == SUBJECTKEY::SUBJECT_DOG)
    {
        happyIndex = happyIndex + 1;
    };
};
void Dog::subcribeSubject(Subject*s)
{
    AnimalsSubject = s;
}
void Dog::sound()
{
    //publish to AnimalsSubject SUBJECT_DOG
    AnimalsSubject->publish(SUBJECTKEY::SUBJECT_DOG,SOUND::GOO);
}