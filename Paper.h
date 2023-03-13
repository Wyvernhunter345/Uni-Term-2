#ifndef PAPER
#define PAPER
#include "Move.h"
#include <string>

class Paper : public Move
{
public:
    bool beats(Move *move) override;
    std::string getName() override;
};

#endif