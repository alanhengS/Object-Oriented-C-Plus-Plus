#ifndef CHARMANDER_H
#define CHARMANDER_H

#include <string>
#include <vector>
#include "Pokemon.h"

class Charmander : public Pokemon{
    public: 
        //Constructors
        Charmander();
        Charmander(string name, int hp, int att, int def, vector<string> t, vector<string> s);
        //Mutator Functions
        void speak();
        void printStats();
    private:
        vector<string> skills;
        string name;
        int hp;
        int attack;
        int defense;
};

#endif