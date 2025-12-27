#include <iostream>

int main()
{
    /*

    nested loops = a loop that's inside of another loop

    */

    // I wanna counting 1-10 for 3 times!

    for(int i = 1; i <= 3; i++) // big loops
    {
         for(int j = 1; j <= 10; j+=1) // small loops
        {
        std::cout << j << ' ';
        }
        std::cout << '\n';
    }

    std::cout << '\n';

    // I wanna draw some things!

    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i+=1)
    {
        for(int j = 1; j <= columns; j++)
        {
            std::cout << symbol;
        }
        std::cout << '\n';
    }
    return 0;
}