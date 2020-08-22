

#ifndef ANIMALS
#define ANIMALS
#include<string>
#include<iostream>
class Animals
{
private:
    /* data */
protected:
    int age;
    std::string name;
public:
    virtual void sound()=0;
    virtual void testType(){std::cout << "This is base animals class"<< '\n';};
    virtual void setName(std::string) = 0;
    virtual void setAge(int) = 0;
    virtual std::string getName() = 0;
};



#endif