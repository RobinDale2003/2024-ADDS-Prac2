#ifndef Move_H
#define Move_H
#include <string>
class Move {
    public:
        virtual std::string moveName() = 0;
        virtual bool weakTo(Move* oppMove) = 0;
        
};
#endif