#include "Zombie.h"
#include <string>

bool Zombie::beats(Move *move)
{
    std::string moveName = move->getName();
    return (moveName == "Pirate" || moveName == "Monkey");
}

std::string Zombie::getName()
{
    return "Zombie";
}