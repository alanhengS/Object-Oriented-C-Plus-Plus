#include "RPG.h"

void displayEnd(RPG player1, RPG player2){
    if (player1.isAlive() && !player2.isAlive()){
        cout << player1.getName() << " defeated " << player2.getName() << "! Good Game!" << endl;
    }
    else
        cout << player2.getName() << " defeated " << player1.getName() << "! Good Game!" << endl;

}

void displayStats(RPG player1, RPG player2){
    cout << player1.getName() << " health: " << player1.getHealth() << " " << player2.getName() 
    << " health: " << player2.getHealth() << endl;
}

void gameLoop(RPG* player1, RPG* player2){
    int turn = rand() % 2;
    while ((player1)->isAlive() && (player2)->isAlive()){
        displayStats(*player1, *player2);
        if (turn == 1){
            cout << (*player1).getName() << " turn" << endl;
            (*player1).useSkill((player2));
            cout << "-------------------------------------------\n";
            turn = 2;
        }
        else{
            cout << (*player2).getName() << " turn" << endl;
            (*player2).useSkill((player1));
            cout << "-------------------------------------------\n";
            turn = 1;
        }
    } 
}



int main(){
    srand(time((0)));
    RPG p1 = RPG("Wiz", 70, 45, 15, "mage");
    RPG p2 = RPG();
    gameLoop(&p1, &p2);
    displayEnd(p1,p2);
    
}

