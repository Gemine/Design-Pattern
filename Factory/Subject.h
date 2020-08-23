#ifndef _SUBJECT
#define _SUBJECT

#include "Define.h"
#include<iostream>
#include<map>
#include<vector>
#include<queue>
#include"Animals.h"
#include"Define.h"
#ifndef DEFINE
#define DEFINE
enum class SUBJECTKEY
{
    SUBJECT_DOG, SUBJECT_CAT,  SUBJECT_PIG,
};
enum class SOUND
{
    GOO,
    MEW,
    UTT,
};

#endif
class Animals;
class Subject
{
    private:
        std::queue<SOUND> queueSound;
        std::vector<Animals*> vectorAnimals;
        std::map<SUBJECTKEY,std::queue<SOUND>> soundSubject{{SUBJECTKEY::SUBJECT_DOG,queueSound }};
        std::map<SUBJECTKEY,std::vector<Animals*>> subcriberSubject{{{SUBJECTKEY::SUBJECT_DOG,vectorAnimals}}};
    protected:
    public:
        void createSubject();
        void publish(SUBJECTKEY s,SOUND soun);
        void subscribe(SUBJECTKEY s,Animals*a);
        void notify(SUBJECTKEY s);


};

#endif