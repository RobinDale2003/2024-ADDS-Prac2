#include "Move.h"
#include "Monkey.h"
Monkey::Monkey() {
    name = "Monkey";
};
std::string Monkey::moveName() {
    return this->name;
};

bool Monkey::weakTo(Move* oppMove){
    if (oppMove->moveName() == "Pirate") {
        return 0;
    } else {
return 1;
};
};