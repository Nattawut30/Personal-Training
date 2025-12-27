#include <iostream>

int main()
{
    /*

    pseudo_random = NOT truly random but close

    */

    srand(time(NULL));

    int num1 = (rand() % 6) + 1; // modulus give you the remainder of any division
    // + 1 we need 6 as well (1-6)
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}