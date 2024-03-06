#include "Player.h"
#include "Computer.h"
Computer::Computer(){
    name = "Computer";
};
char Computer::makeMove(){
    move = 'R';
    return move;
};
std::string Computer::getName(){
    return name;
};