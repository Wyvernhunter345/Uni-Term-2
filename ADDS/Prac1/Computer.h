#ifndef COMPUTER
#define COMPUTER
#include <string>
#include "Player.h"

class Computer : public Player
{
public:
    Computer();
    char makeMove() override;
    std::string getName() override;

private:
    std::string name;
};

#endif // COMPUTER