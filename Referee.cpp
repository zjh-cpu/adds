#include "Referee.h"

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();
    
    if (move1->beats(*move2)) return player1;
    else if (move2->beats(*move1)) return player2;
    else return nullptr;  // It's a tie
}
