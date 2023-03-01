#ifndef HUMAN
#define HUMAN
#include <string>
#include "Player.h"

class Human : public Player
{
    std::string name;

public:
    Human();
    Human(std::string n);
    char makeMove() override;
    std::string getName() override;
};

#endif // HUMAN