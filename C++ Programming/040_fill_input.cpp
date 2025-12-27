#include <iostream>

int main()
{
    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp; 

    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter a food you like or press 'q' to quit #" << i + 1 << ": ";

        // add + 1 so the users knew No. of orders
        // but we as a dev. know its start with 0

        std::getline(std::cin, temp);
        if(temp == "q")
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }

    std::cout << "You like the following foods:\n";

    for(int i = 0; !foods[i].empty(); i++)
    {
        std::cout << foods[i] << '\n';
    }
    return 0;
}