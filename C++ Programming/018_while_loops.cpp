#include <iostream>

int main()
{
    /*

    like an if statement but cannot repeat some code
    potentially an infinite amount of times

    */

    std::string name;

    while(name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    // as long as the conditions remains true, repeat it
    // forced users to do something untill they do or follow our conditions
    
    std::cout << "Hello, " << name;

    return 0;
}