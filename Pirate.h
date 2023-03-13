#ifndef PIRATE
#define PIRATE
#include "Move.h"
#include <string>

class Pirate : public Move
{
public:
    bool beats(Move *move) override;
    std::string getName() override;
};

#endif