#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include <iostream>

int main()
{
    Player *p1 = new Human("Bob");
    Player *p2 = new Computer();
    Referee *ref = new Referee();
    Player *winner = ref->refGame(p1, p2);
    if (winner != nullptr)
    {
        std::cout << winner->getName() << " wins" << std::endl;
    }
    else
    {
        std::cout << "It's a tie" << std::endl;
    }
    return 0;
}