#include <iostream>

int main()
{
    int num = 0;
    int guess = 0;
    int tries = 0;

    srand(time(NULL));
    num = rand() % 100 + 1;

    std::cout << "============ NUMBER GUESSIN GAME ============\n";

    do
    {
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if(guess > num)
        {
            std::cout << "Too High!\n";
        }
        else if(guess < num)
        {
            std::cout << "Too Low!\n";
        }
        else
        {
            std::cout << "CORRECT! # of tries: " << tries << std::endl;
        }
    }
    while(guess != num);

    std::cout << "========================\n";

    return 0;
}