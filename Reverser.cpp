#include "Reverser.h"
#include <iostream>
#include <string>
using namespace std;

int reverse(int value, int acc)
{
    if (value < 0)
        return -1;
    if (value == 0)
    {
        return acc;
    }
    else
    {
        acc = (acc * 10) + (value % 10);
        return reverse(value / 10, acc);
    }
}

int Reverser::reverseDigit(int value)
{
    return reverse(value, 0);
}

string Reverser::reverseString(string characters)
{
    // Input check
    if (characters.length() == 0)
    {
        return "ERROR";
    }

    // Base Case
    if (characters.length() == 1)
    {
        return characters;
    }

    // Recursive Case
    return reverseString(characters.substr(1)) + characters[0];
}