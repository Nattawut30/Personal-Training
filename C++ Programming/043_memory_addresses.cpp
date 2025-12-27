#include <iostream>

int main()
{
    /*

    memory address = a location in memory where data is stored
    a memory address can accessed with, & (address of operator)

    */

    // they exists somewhere in your computer memory, we gonna find that address

    std::string name = "Fluke"; // might takes up higher memory
    int age = 25;
    bool student = false; // takes up 1 bytes of memory

    // memory addresses all in haxadecimal
    // find it in the online to convert into a Decimal

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    return 0;
}