#include <iostream>

void swap(std::string &x, std::string &y); // ref. the address

// & pass by ref. from address, use this!
// none-& pass by value

int main()
{
    /*

    when we pass a variable to a function we're passing
    we're passing by value
    when we invoke the function below we're creating copies of the original values
    what we have now are 2 copies of the variable x and y
    so we need to switching the 2 copies and not the og values
    that's passed by value

    */

    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y); // pass by reference
    // ref. as in a memory address an address in your computer's memory
    // where a value is located, it will prefix the address of operator
    // which is an ampersand to these parameter names then add that to your
    // function declaration as well

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}
void swap(std::string &x, std::string &y) // ref. by the address
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}
// invert thinking!