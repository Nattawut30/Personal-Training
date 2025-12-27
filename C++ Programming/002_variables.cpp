#include <iostream>

int main() {

    int x; // declaration
    x = 5; // assignment
    int y = 6;
    int sum = x + y;

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << sum << std::endl;
    std::cout << '\n';

    // integer (whole number)
    int age = 25;
    int year = 2025;
    int days = 7;

    std::cout << year << std::endl;
    std::cout << '\n';

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 35.7;
    
    std::cout << price << std::endl;
    std::cout << '\n';

    // char (single character, single quote)
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    std::cout << initial << std::endl;
    std::cout << '\n';

    // boolean (condition: true[1] or false[0])
    bool student = false;
    bool power = true;
    bool forSale = true;

    std::cout << power << std::endl;
    std::cout << '\n';

    // string (objects that represent a sequence of text)
    // char but can store more than 1 character even whole sentence
    std::string name = "Fluke";
    std::string day = "Sunday";
    std::string food = "Pizza";
    std::string address = "123 Fake St.";

    std::cout << name << std::endl;
    
    // add space directly at the code for output space
    std::cout << "My favorite food is " << food << std::endl;
    std::cout << "I am " << age << " years old" << std::endl;

    return 0;
}