#include "RPG.h"


int main(){
    RPG bot = RPG();
    RPG realPlayer = RPG("Legend", 100, 50, 100, "mage");
    RPG* botPTR = &bot;
    cout << "Stats: Player Name: " << bot.getName() << ", Health: " << bot.getHealth()  << ", Strength: " << bot.getStrength() 
     << ", Defense: " << bot.getDefense() << endl;

    cout << "Stats: Player Name: " << realPlayer.getName() << ", Health: " << realPlayer.getHealth()  << ", Strength: " << realPlayer.getStrength() 
    << ", Defense: " << realPlayer.getDefense() << endl;

    realPlayer.attack(botPTR);
    cout << "Is bot alive? " << bot.isAlive() << endl;
    realPlayer.useSkill(botPTR);
    
}
