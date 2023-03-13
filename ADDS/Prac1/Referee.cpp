#include "Referee.h"
#include <iostream>
#include <string>

Referee::Referee()
{
}

Player *Referee::refGame(Player *p1, Player *p2)
{
    // Call makeMove on each player
    char p1Move = p1->makeMove();
    char p2Move = p2->makeMove();

    // Get the names of each player
    std::string p1Name = p1->getName();
    std::string p2Name = p2->getName();

    /** Construct a lookup table for the results
     *
     * All possible columns denote the move of player 1,
     * and all possible rows denote the move of player 2.
     *
     * In this case, 1 means that player 1 wins,
     * 2 means that player 2 wins,
     * and T means that it's a tie. **/

    const char results[3][3] = {
        // r    p    s  VS
        {'T', '2', '1'},  // r
        {'1', 'T', '2'},  // p
        {'2', '1', 'T'}}; // s

    // Convert the moves to indexes
    int p1Index = (p1Move == 'R' ? 0 : (p1Move == 'P' ? 1 : 2));
    int p2Index = (p2Move == 'R' ? 0 : (p2Move == 'P' ? 1 : 2));

    // Get the result
    char result = results[p1Index][p2Index];

    if (result == 'T')
    {
        std::cout << "Tie" << std::endl;
        return nullptr;
    }
    else if (result == '2')
    {
        std::cout << p2Name << std::endl;
        return p2;
    }
    else if (result == '1')
    {
        std::cout << p1Name << std::endl;
        return p1;
    }
    return nullptr;
}