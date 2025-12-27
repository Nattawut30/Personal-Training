#include <iostream>

class Human
{
    public:
        std::string name;
        std::string job;
        int age;

        // methods
        void eat()
        {
            std::cout << "This person is eating\n";
        }
        void drink()
        {
            std::cout << "This person is drinking\n";
        }
        void sleep()
        {
            std::cout << "This person is sleeping\n";
        }
};

class Car
{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate()
        {
            std::cout << "You hit on the gas!\n";
        }
        void brake()
        {
            std::cout << "You tap on the brakes!\n";
        }
};

int main()
{
    /*
    
    object = A collection of attributes and methods
    They can have characterristics and could perform actions
    Can be used to mimic real world items (ex. Phone, Book, Dog)
    Created from a class which acts as a "blue-print"
    
    */

    Human human1;
    Human human2;

    Car car1;

    human1.name = "Leon";
    human1.job = "Agents";
    human1.age = 51;

    human2.name = "Grace";
    human2.job = "FBI";
    human2.age = 24;

    car1.make = "Bugati";
    car1.model = "Shiron";
    car1.year = 2025;
    car1.color = "Orange";

    // they have methods which is can perform action

    std::cout << human1.name << '\n';
    std::cout << human1.job << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    std::cout << '\n';

    std::cout << human2.name << '\n';
    std::cout << human2.job << '\n';
    std::cout << human2.age << '\n';

    human2.eat();
    human2.drink();
    human2.sleep();

    std::cout << '\n';

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    car1.accelerate();
    car1.brake();

    return 0;
}