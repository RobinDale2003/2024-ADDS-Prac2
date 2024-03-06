#ifndef Monkey_H
#define Monkey_H
#include "Move.h"
class Monkey : public Move {
    private:
    std::string name;
    public:
    std::string moveName();
    bool weakTo(Move* oppMove);
    Monkey();
};
#endif