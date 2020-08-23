

#ifndef DOG
#define DOG
#include "Animals.h"
#include <iostream>
#include "Define.h"
#include "Subject.h"
class Dog : public Animals
{
private:
protected:
public:
    void testType();
    void testType1();
    void setName(std::string inName);
    void setAge(int inAge);
    std::string getName();
    void sound();
    void update(SUBJECTKEY subjectkey);
    int getHappyIndex(){return happyIndex;};
    void subcribeSubject(Subject*s);
};

#endif