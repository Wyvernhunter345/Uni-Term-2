#include "Referee.h"
#include <iostream>
#include <string>

Referee::Referee()
{
}

Player *Referee::refGame(Player *p1, Player *p2)
{
    char p1Move = p1->makeMove();
    char p2Move = p2->makeMove();
    std::string p1Name = p1->getName();
    std::string p2Name = p2->getName();

    if (p1Move == 'R' && p2Move == 'R')
    {
        return nullptr;
    }
    else if (p1Move == 'R' && p2Move == 'P')
    {
        return p2;
    }
    else if (p1Move == 'R' && p2Move == 'S')
    {
        return p1;
    }
    else if (p1Move == 'P' && p2Move == 'R')
    {
        return p1;
    }
    else if (p1Move == 'P' && p2Move == 'P')
    {
        return nullptr;
    }
    else if (p1Move == 'P' && p2Move == 'S')
    {
        return p2;
    }
    else if (p1Move == 'S' && p2Move == 'R')
    {
        return p2;
    }
    else if (p1Move == 'S' && p2Move == 'P')
    {
        return p1;
    }
    else if (p1Move == 'S' && p2Move == 'S')
    {
        return nullptr;
    }
    else
    {
        return nullptr;
    }
}