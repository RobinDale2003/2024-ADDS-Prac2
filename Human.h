#include "Player.h"
#ifndef Human_H
#define Human_H
#include <string>
#include <stdio.h>
class Human: public Player {
    private:
        char move;
        std::string name;
    public:
        char makeMove();
        std::string getName();
        Human();
        Human(std::string newName);
};
#endif