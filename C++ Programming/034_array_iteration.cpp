#include <iostream>

int main()
{
    std::string agents[] = {"Leon", "Jill", "Chris", "Ada", "Grace"};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    // even we delete some of the elemets, it will calculate the size automatically
    for(int i = 0; i < sizeof(agents)/sizeof(std::string); i++)
    {
        std::cout << agents[i] << '\n';
    }

    std::cout << '\n';

    for(int i = 0; i < sizeof(grades)/sizeof(char); i++)
    {
        std::cout << grades[i] << '\n';
    }

    return 0;
}