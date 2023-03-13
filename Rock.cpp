#include "Rock.h"
#include <string>

bool Rock::beats(Move *move)
{
    std::string moveName = move->getName();
    return (moveName == "Scissors");
}

std::string Rock::getName()
{
    return "Rock";
}