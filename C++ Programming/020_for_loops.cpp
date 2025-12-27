#include <iostream>

int main()
{
    /*

    for loop = a loop that will execute the block of code
    specified amount of times
    
    */

    // 3 statements seperate it with ;
    // 1 = create an index a sort of counter
    // 2 = stopping conditions
    // 3 = we can increment or decrement or counter our index
    for(int index = 10; index >= 0; index-=1)
    {
        std::cout << index << '\n';
    }

    std::cout << "HAPPY NEW YEAR!\n";

    // use it when you need to repeat it code certain amount of time

    return 0;   
}