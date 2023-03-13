#ifndef MOVE
#define MOVE
#include <string>

class Move
{
public:
    virtual bool beats(Move *move) = 0;
    virtual std::string getName() = 0;
};

#endif