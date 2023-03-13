#ifndef HUMAN
#define HUMAN
#include <string>
#include "Player.h"
#include "Move.h"

class Human : public Player
{
    std::string name;

public:
    Human();
    Human(std::string n);
    Move *makeMove() override;
    std::string getName() override;
};

#endif // HUMAN