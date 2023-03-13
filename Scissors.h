#ifndef SCISSORS
#define SCISSORS
#include "Move.h"
#include <string>

class Scissors : public Move
{
public:
    bool beats(Move *move) override;
    std::string getName() override;
};

#endif