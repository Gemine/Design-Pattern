#include "Subject.h"

void Subject::publish(SUBJECTKEY s, SOUND soun)
{
    //find SUBJECTKEY in map and push sound to queue
    std::map<SUBJECTKEY, std::queue<SOUND>>::iterator it = soundSubject.find(s);
    it->second.push(soun);
    //notify to Animals
    notify(s);
};
void Subject::subscribe(SUBJECTKEY s, Animals *a)
{
    std::cout<<"run in subscribe func"<<'\n';
    //Find SUBJECTKEY in map subcriberSubject and push Animal pointer to vector
    std::map<SUBJECTKEY, std::vector<Animals *>>::iterator it = subcriberSubject.find(s);
    std::cout << "in middle subscribe func" << '\n';
    (it->second).push_back(a);
    std::cout<<"run out subscribe func"<<'\n';

};
void Subject::notify(SUBJECTKEY s)
{
    // std::map<SUBJECTKEY, std::vector<Animals *>>::iterator it = subcriberSubject.find(s);
    // std::vector<Animals *> ani = it->second;
    // for (std::vector<Animals *>::iterator ptr = ani.begin(); ptr !=ani.end(); ++ptr)
    // {
    //     Animals *ani = ptr;
    //     ani->update(s);
    // }
    
    std::vector<Animals*> ani = subcriberSubject[s];
    for (std::vector<Animals *>::iterator ptr = ani.begin(); ptr !=ani.end(); ++ptr)
    {
        Animals *ani = *ptr;
        ani->update(s);
    }

};