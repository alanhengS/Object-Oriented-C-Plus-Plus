#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <vector>
using namespace std;

class Pokemon{
    public:
        // Constructor
        Pokemon();
        Pokemon(string name, int hp, int att, int def, vector<string> type);
        //Mutator Functions
        virtual void speak();
        virtual void printStats();
        //Accessor Functions

    protected:
        string name;
        int hp;
        int attack;
        int defense;
        vector<string> type;

};

#endif