#include "Robot.h"
#include <string>

bool Robot::beats(Move *move)
{
    std::string moveName = move->getName();
    return (moveName == "Ninja" || moveName == "Zombie");
}

std::string Robot::getName()
{
    return "Robot";
}