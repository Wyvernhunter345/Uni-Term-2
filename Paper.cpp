#include "Paper.h"
#include <string>

bool Paper::beats(Move *move)
{
    std::string moveName = move->getName();
    return (moveName == "Rock");
}

std::string Paper::getName()
{
    return "Paper";
}