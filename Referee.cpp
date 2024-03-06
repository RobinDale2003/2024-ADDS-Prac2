#include "Referee.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
Referee::Referee(){
    name = "Referee";
};
Player *Referee::refGame(Player *player1, Player *player2){
    char p1move = player1->makeMove();
    char p2move = player2->makeMove();
    if (p1move == p2move) {
        return nullptr;
    } else if (p1move == 'P' && p2move == 'R') {
        return player1;
    } else if (p1move == 'S' && p2move == 'R') {
        return player2;
    } else {
        return nullptr;
    }
};