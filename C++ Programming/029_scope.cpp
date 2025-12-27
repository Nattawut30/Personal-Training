#include <iostream>

int myNum = 3; // global

// must add :: to the variable to result from global

void printNum();

int main()
{
    /*

    Local variable = declared inside a function or block {}
    Global variable = declared outside of all functions

    */

    int myNum = 1; // local
    printNum();
    std::cout << myNum << '\n'; // local
     //std::cout << ::myNum << '\n'; = global

    // add :: the scope resolution operator

    return 0;
}
// a function will use any local variables first before resorting to any global variable
// as you can see it's different 2 scope

void printNum()
{
    int myNum = 2; // local
    std::cout << myNum << '\n'; // local
    //std::cout << ::myNum << '\n'; = global

    // add :: the scope resolution operator

}