

#ifndef ANIMALS
#define ANIMALS
#include<string>
#include<iostream>
#include "Define.h"
#include "Subject.h"
class Subject;
class Animals
{
private:
    /* data */
protected:
    int age;
    std::string name;
    int happyIndex = 10;
    Subject *AnimalsSubject;
public:
    virtual void sound()=0;
    virtual void testType(){std::cout << "This is base animals class"<< '\n';};
    virtual void setName(std::string) = 0;
    virtual void setAge(int) = 0;
    virtual std::string getName() = 0;
    virtual void update(SUBJECTKEY)=0;
    virtual int getHappyIndex() = 0;
    virtual void subcribeSubject(Subject*) = 0;
};



#endif