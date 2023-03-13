#ifndef ZOMBIE
#define ZOMBIE
#include "Move.h"
#include <string>

class Zombie : public Move
{
public:
    bool beats(Move *move) override;
    std::string getName() override;
};

#endif