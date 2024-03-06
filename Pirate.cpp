#include "Move.h"
#include "Pirate.h"
Pirate::Pirate() {
    name = "Pirate";
};
std::string Pirate::moveName() {
    return this->name;
};

bool Pirate::weakTo(Move*){
return 1;
};