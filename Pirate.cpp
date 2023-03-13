#include "Pirate.h"
#include <string>

bool Pirate::beats(Move *move)
{
    std::string moveName = move->getName();
    return (moveName == "Robot" || moveName == "Monkey");
}

std::string Pirate::getName()
{
    return "Pirate";
}