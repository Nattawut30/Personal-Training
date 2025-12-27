#include <iostream>

struct Car
{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);

void paintCar(Car &car, std::string color);

int main()
{
    Car car1;
    Car car2;

    car1.model = "Bugati";
    car1.year = 2023;   
    car1.color = "Silver";

    car2.model = "Roll-Royce";
    car2.year = 2024;
    car2.color = "Navy-Blue";

    // add new color
    paintCar(car1, "Red");
    paintCar(car2, "Gold");

    // struct pass by value rather than reference 
    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car &car)
{
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

// use & to define it
void paintCar(Car &car, std::string color)
{
    car.color = color;
}