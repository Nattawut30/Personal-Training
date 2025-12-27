#include <iostream>

int main()
{
    /* 
    
    type conversion = conversion a value of one data type to another
    Implicit = automatic
    Explicit = Precede value with new data type (int)

    */

    double x = (int) 3.14;
    std::cout << x << std::endl;

    char y = 100; // will convert it into ASCII TABLE
    std::cout << y << std::endl;

    int correct = 7;
    int questions = 10;
    double score = correct/(double)questions * 100;
    // cast it as double

    std::cout << score << "%" << std::endl;

    return 0;
}