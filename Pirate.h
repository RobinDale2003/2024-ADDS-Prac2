#ifndef Pirate_H
#define Pirate_H
#include "Move.h"
class Pirate : public Move {
    private:
    std::string name;
    public:
    std::string moveName();
    bool weakTo(Move* oppMove);
    Pirate();
};
#endif