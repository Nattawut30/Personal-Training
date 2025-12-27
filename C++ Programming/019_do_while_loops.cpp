#include <iostream>

int main()
{
    /*
    
    do while loop = do some block of code first,
    THEN repeat again if conditions is true

    */

    int number;

    do
    {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }
    while(number < 0); 

    std::cout << "The number is: " << number;

    // use it for the game if they would like to play it again or not

    return 0;
}