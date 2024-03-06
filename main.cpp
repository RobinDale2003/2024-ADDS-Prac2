#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
int main(void) {
Human *player1;
Computer *player2;
Referee *ref;

player1 = new Human("Robin");
player2 = new Computer();
ref = new Referee();
Player* winner = ref->refGame(player1, player2);
if (winner == nullptr) {
    std::cout << "It's a tie" << std::endl;
} else {
    std::cout << winner->getName() << " Wins" << std::endl;
};
};