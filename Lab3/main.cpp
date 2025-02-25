#include "RPG.h"
#include <iostream>

int main(){
    RPG bot = RPG();
    RPG realPlayer = RPG("Legend", 100, 50, 100, "mage");

    cout << "Stats: Player Name: " << bot.getName() << ", Health: " << bot.getHealth()  << ", Strength: " << bot.getStrength() 
     << ", Defense: " << bot.getDefense() << endl;

    cout << "Stats: Player Name: " << realPlayer.getName() << ", Health: " << realPlayer.getHealth()  << ", Strength: " << realPlayer.getStrength() 
    << ", Defense: " << realPlayer.getDefense() << endl;

    cout << "Is bot alive? " << bot.isAlive() << endl;
    realPlayer.updateHealth(1);

    cout << "Stats: Player Name: " << realPlayer.getName() << ", Health: " << realPlayer.getHealth()  << ", Strength: " << realPlayer.getStrength() 
    << ", Defense: " << realPlayer.getDefense() << endl;
}
