#include "Referee.h"
#include <iostream>
#include <string>

Referee::Referee()
{
}

Player *Referee::refGame(Player *p1, Player *p2)
{
    Move *p1move = p1->makeMove();
    Move *p2move = p2->makeMove();

    if (p1move->getName() == p2move->getName())
    {
        std::cout << "Tie" << std::endl;
        return nullptr;
    }

    Player *winner = p1move->beats(p2move) ? p1 : p2;
    std::cout << winner->getName() << std::endl;
    return winner;
}