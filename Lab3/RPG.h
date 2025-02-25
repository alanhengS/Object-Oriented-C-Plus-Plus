#ifndef RPG_H
#define RPG_H
#include <string>
using namespace std;

const int SKILL_SIZE = 2;
class RPG{
    private:
        string name;
        int health;
        int strength;
        int defense;
        string type;
        string skills[SKILL_SIZE];
    public: 
        RPG();
        RPG(string name , int health, int strength, int defense, string typ);
        void setSkills();
        void printAction(string RPG);
        void updateHealth(int);
        void attack(RPG*);
        void useSkil(RPG*);
        bool isAlive() const;
        string getName() const;
        int getHealth() const;
        int getStrength() const;
        int getDefense() const;


};

#endif