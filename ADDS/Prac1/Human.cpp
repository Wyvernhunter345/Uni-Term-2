#include "Human.h"
#include <iostream>

Human::Human()
{
    name = "Human";
}

Human::Human(std::string n)
{
    name = n;
}

char Human::makeMove()
{
    std::string move;
    std::cout << "Enter Move: ";
    getline(std::cin, move);
    return move[0];
}

std::string Human::getName()
{
    return name;
}