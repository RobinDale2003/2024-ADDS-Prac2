#include "Player.h"
#include "Human.h"
Human::Human()
{
    name = "Human";
}
Human::Human(std::string newName)
{
    name = newName;
}
char Human::makeMove()
{
    std::cout << "Enter move: ";
    std::cin >> move;
    return move;
};
std::string Human::getName()
{
    return name;
};