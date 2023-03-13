#include "Ninja.h"
#include <string>

bool Ninja::beats(Move *move)
{
    std::string moveName = move->getName();
    return (moveName == "Pirate" || moveName == "Zombie");
}

std::string Ninja::getName()
{
    return "Ninja";
}