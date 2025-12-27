#include <iostream>

int max(int x, int y)
{
    return (x > y) ? x : y;
}

double max(double x, double y)
{
    return (x > y) ? x : y;
}

char max(char x, char y)
{
    return (x > y) ? x : y;
}

// too much! what if we can write just 1 function that covered them all?
// so we write a 'function templates' to make it less duplicate work from different data type!

// Use this!
template <typename T, typename U>
auto high(T x, U y)
{
    return (x > y) ? x : y;
}

int main()
{
    /*
    
    function template = describes what a function looks like.
    Can be used to generate as many overloaded functions
    as needed, each using different data types
    
    */

    std::cout << max(1, 2) << '\n';
    std::cout << max(1.1, 2.1) << '\n';
    std::cout << max('1', '2') << '\n';

    std::cout << high(3, 6) << '\n';
    std::cout << high(3, 6.1) << '\n';


    return 0;
}