#include <iostream>

int main()
{
    /*
    && = check if 2 conditions are true
    || = check if at least one of 2 conditions is true
    !  = reverses the logical state of its operand 
    */

    int temp;
    bool sunny = false;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // temperature is in celsius

    if(temp > 0 && temp < 30)
    {
        std::cout << "The temperature is good!\n";
    }
    else
    {
        std::cout << "The temperature is bad!\n";
    }

    if(temp <=0 || temp >= 30)
    {
        std::cout << "The temperature is bad!\n";
    }
    else
    {
        std::cout << "The temperature is good!\n";
    }

    if (!sunny)
    {
        std::cout << "It is cloudy outside!\n";

    }
    else
    {
        std::cout << "It is sunny outside!\n";
    }
}