#ifndef Player_H
#define Player_H
#include <iostream>
#include <stdio.h>
#include <string>

class Player {
    public:
        virtual std::string getName() = 0;
        virtual char makeMove() = 0;
        
};
#endif