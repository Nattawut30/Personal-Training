#include <iostream>
#include <cmath> // we need this for import math function

int main()
{
    double x = 3.99;
    double y = 4;
    double z;

    z = std::max(x, y);
    z = std::min(x, y);
    z = pow(2, 4); // power
    z = sqrt(9); // square root
    z = abs(-30); // absolute 
    z = round(x); // round up
    z = ceil(x); // ceiling
    z = floor(x); // round down

    std::cout << z;

    return 0;
}

// check out more at: www.cplusplus.com/reference/cmath