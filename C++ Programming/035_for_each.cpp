#include <iostream>

int main()
{
    /*
    
    foreach loop = loop that eases the travelsal over an
    iterable data set

    */

    std::string agents[] = {"Leon", "Chris", "Jill", "Ada"};
    int grades[] = {65, 72, 84, 93};

    for(std::string agent : agents)
    {
        std::cout << agent << '\n';
    }

    std::cout << '\n';

    for(int grade : grades)
    {
        std::cout << grade << '\n';
    }


    // this works too but less space, cleaner, and flexible.
    return 0;
}