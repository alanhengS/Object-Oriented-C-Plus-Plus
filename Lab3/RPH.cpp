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

/**
 * @brief sets the skills based on the RPG's role
 */
void RPG::setSkills(){
    if (type == "mage"){
        skills[0] = "fire";
        skills[1] = "thunder";
    } else if (type == "thief"){
        skills[0] = "pilfer";
        skills[1] = "jab";
    } else if (type == "archer"){
        skills[0] = "parry";
        skills[1] = "crossbow_attack";
    } else {
        skills[0] = "slash";
        skills[1] = "parry";
    }
}

void RPG::printAction(string skill, RPG opponent){
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str());
}

/**
* @brief updates health into new_health
*
* @param new_health
*/
void RPG::updateHealth(int new_health){
    this->health = new_health;
}


void RPG::attack(RPG*);
void RPG::useSkill(RPG*);

/**
* @brief returns whether health is greater than 0
*
* @return true
* @return false
*/
bool RPG::isAlive() const{
    return (health > 0);
}

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