#include <iostream>

int main()
{

    /*

    ternary operator ?: = replacement to an if/else statement
    condition ? expression 1 : expression2;

    */

    int grade = 75;
    grade >= 60 ? std::cout << "You pass!" : std::cout << "You failed!";
    // much better than writing long ahh if-statement
    std::cout << '\n';

    int number = 8;
    number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";
    std::cout << '\n';

    // boolean is true or 1 by default setting
    bool hungry = true;
    hungry ? std::cout << "You are hungry" : std::cout << "You are full";
    std::cout << '\n';

    // write it like this works too
    bool status = false;
    std::cout << (status ? "You are married!" : "You are single!");

    return 0;
}