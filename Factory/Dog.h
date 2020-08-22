

#ifndef DOG
#define DOG
#include "Animals.h"
#include<iostream>
class Dog:public Animals
{
    private:
    protected:
    public:
    void testType();
    void testType1();
    void setName(std::string inName);
    void setAge(int inAge);
    std::string getName();
    void sound(){};

};



#endif