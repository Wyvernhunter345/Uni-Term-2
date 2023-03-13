#ifndef ROCK
#define ROCK
#include "Move.h"
#include <string>

class Rock : public Move
{
public:
    bool beats(Move *move) override;
    std::string getName() override;
};

#endif