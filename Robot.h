#ifndef ROBOT
#define ROBOT
#include "Move.h"
#include <string>

class Robot : public Move
{
public:
    bool beats(Move *move) override;
    std::string getName() override;
};

#endif