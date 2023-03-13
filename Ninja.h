#ifndef NINJA
#define NINJA
#include "Move.h"
#include <string>

class Ninja : public Move
{
public:
    bool beats(Move *move) override;
    std::string getName() override;
};

#endif