#ifndef MONKEY
#define MONKEY
#include "Move.h"
#include <string>

class Monkey : public Move
{
public:
    bool beats(Move *move) override;
    std::string getName() override;
};

#endif