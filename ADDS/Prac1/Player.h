#ifndef PLAYER
#define PLAYER
#include <string>

class Player
{
public:
    virtual char makeMove() = 0;
    virtual std::string getName() = 0;
};

#endif // PLAYER