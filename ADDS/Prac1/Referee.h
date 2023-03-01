#ifndef REF
#define REF
#include "Player.h"

class Referee
{
public:
    Referee();
    Player *refGame(Player *p1, Player *p2);
};

#endif // REF