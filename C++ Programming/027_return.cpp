#include <iostream>

// Ex. 1
double square(double length);
double cube(double length);

// Ex. 2
std:: string concatString(std::string string1, std::string string2);


int main()
{   
    /*

    return = return a value back to the spot
    where you called the encompassing function

    */

    // set up
    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    std::string firstName = "Nattawut";
    std::string lastName = "Boonnoon";
    std::string fullName = concatString(firstName, lastName);

    // results

    // Ex. 1
    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";
    std::cout << '\n';

    // Ex. 2
    std::cout << "Hello, " << fullName;
    std::cout << '\n';


    return 0;
}
// Ex. 1
double square(double length)
{
    return length * length;
}
double cube(double length)
{
    return length * length * length;
}

// Ex. 2
std:: string concatString(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}