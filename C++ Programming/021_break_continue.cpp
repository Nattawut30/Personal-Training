#include <iostream>

int main()
{   
    /*
    break = break out of a loop
    continue = skip current iteration
    */

    for (int i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
            break; // When we hits 13, we break out of the loops
        }
        std::cout << i << '\n';
    }

    std::cout << '\n';
    
    for (int i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
            continue; // we skip 13 continue the counting
        }
        std::cout << i << '\n';
    }
    return 0;
}