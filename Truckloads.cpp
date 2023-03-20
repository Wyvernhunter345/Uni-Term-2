#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize)
{
    // Base Case
    // If numCrates is less than or equal to load size, we only need one truck
    if (numCrates <= loadSize)
        return 1;

    // Recursive Case
    // Divide remaining crates into two piles
    int leftPile = numCrates / 2;
    int rightPile = numCrates - leftPile;

    // Call numTrucks on each pile and add results
    return numTrucks(leftPile, loadSize) + numTrucks(rightPile, loadSize);
}