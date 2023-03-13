#include "Scissors.h"
#include <string>

bool Scissors::beats(Move *move)
{
    std::string moveName = move->getName();
    return (moveName == "Paper");
}

std::string Scissors::getName()
{
    return "Scissors";
}