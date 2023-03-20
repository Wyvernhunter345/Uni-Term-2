#include "Reverser.h"
#include "Truckloads.h"
#include <iostream>

int main()
{
    Reverser r;
    Truckloads t;
    std::cout << r.reverseDigit(123456789) << std::endl;
    std::cout << t.numTrucks(14, 3) << std::endl;
    std::cout << r.reverseString("testing thing");
    return 0;
}