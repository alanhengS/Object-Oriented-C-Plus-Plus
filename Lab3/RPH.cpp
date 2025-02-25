#include "RPG.h"

RPG::RPG(){
    this->name = "NPC";
    this->health = 100;
    this->strength = 10;
    this->defense = 10;
    this->type = "warrior";
    skills[0] = "slash";
    skills[1] = "parry"; 
}

RPG::RPG(string name , int health, int strength, int defense, string type){
    this-> name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this->type = type;
    setSkills();
}

void RPG::setSkills(){
}

void RPG::printAction(string RPG);
void RPG::updateHealth(int);
void RPG::attack(RPG*);
void RPG::useSkill(RPG*);
bool RPG::isAlive() const;

string RPG::getName() const{
    return name;
}

int RPG::getHealth() const{
    return health;
}

int RPG::getStrength() const{
    return strength;
}
int RPG::getDefense() const{
    return defense;
}