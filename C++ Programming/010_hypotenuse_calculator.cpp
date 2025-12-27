#include <iostream>
#include <cmath>

// formula: c = (a^2 + b^2) sqart

int main()
{
    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    // << output shows on our terminal
    // >> need input from outside

    // a = pow(a, 2);
    // b = pow(b, 2);
    // c = sqrt(a + b);

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "side C: " << c;

    return 0;
}