#include"Dog.h"

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
