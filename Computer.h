#include "Player.h"
#ifndef Computer_H
#define Computer_H
class Computer: public Player {
    private:
        char move;
        std::string name;
    public:
        Computer();
        char makeMove();
        std::string getName();
};
#endif