#include "Monkey.h"
#include <string>

bool Monkey::beats(Move *move)
{
    std::string moveName = move->getName();
    return (moveName == "Ninja" || moveName == "Robot");
}

std::string Monkey::getName()
{
    return "Monkey";
}