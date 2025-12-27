#include <iostream>
#include <ctime> // we need to access to the time function

int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1; // give a range of 1-5

    switch(randNum)
    {
        case 1: std::cout << "You win a Bumper Sticker!\n";
            break;
        case 2: std::cout << "You win a T-shirt!\n";
            break;
        case 3: std::cout << "You win a Free Lunch!\n";
            break;
        case 4: std::cout << "You win a Gift Card!\n";
            break;
        case 5: std::cout << "You win a Concert Tickets!\n";
            break;
    }
        // What's my prize between 1-5?
    return 0;
}