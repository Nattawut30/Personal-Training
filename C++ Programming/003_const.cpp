#include <iostream>

int main() {
    /*

    The const keyword specifies that a variable's value is constant
    Tells the compiler to prevent anything from modifying it
    (Read-Only)
    
    */

    // const = constant, locked in the value, to prevent changing it
    const double PI = 3.14159;
    double radius = 25;
    double circumference = 2 * PI * radius;

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    // Capitalize-Letter as well!

    // The variables you DO NOT wanna be changed

    std::cout << circumference << " cm" << std::endl;

}