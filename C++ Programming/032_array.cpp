#include <iostream>

int main()
{
    /*

    array = a data structure that can hold multiple values
    values are accessed by an index number
    "Kind of like a variable that holds multiple values"

    */

    // std::string car[] = {"Bugatti", "Maserati", "Lamborghini"};
    // contains values of the same data type

    std::string car[3];
    // declare an array be sure to set the size and then assign value later

    car[0] = "Rolls-Royce";
    car[1] = "Mustang";
    car[2] = "Camry";

    // double price[] = {5.00, 7.50, 9.99, 15.00};

    double price[4];
    // set a size and then assign values 

    price[0] = 5.00;
    price[1] = 7.50;
    price[2] = 9.99;
    price[3] = 15.00;

    // computer start with 0
    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';

    std::cout << '\n';

    std::cout << price[0] << '\n';
    std::cout << price[1] << '\n';
    std::cout << price[2] << '\n';
    std::cout << price[3] << '\n';

    return 0;
}