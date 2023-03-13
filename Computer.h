#ifndef COMPUTER
#define COMPUTER
#include <string>
#include "Player.h"
#include "Move.h"

class Computer : public Player
{
public:
    Computer();
    Move *makeMove() override;
    std::string getName() override;

private:
    std::string name;
};

#endif // COMPUTER