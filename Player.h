#ifndef PLAYER
#define PLAYER
#include <string>
#include "Move.h"

class Player
{
public:
    virtual Move *makeMove() = 0;
    virtual std::string getName() = 0;
};

#endif // PLAYER