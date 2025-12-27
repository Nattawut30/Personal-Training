#include <iostream>

// EX. 1
class Student
{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string x, int y, double z) // think of this as a function
    {
        name = x;
        age = y;
        gpa = z;
    }

};

// EX. 2
class Car
{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

    Car(std::string make, std::string model, int year, std::string color)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main()
{
    /*
    
    constructor = special method that is automatically called when an object is instantiated
    useful for assigning values to attributes as arguments
    
    */

    Student student1("Leon", 21, 3.4); // pass this arguments to the constructors
    Student student2("Claire", 19, 2.7);
    Student student3("Sherry", 10, 4.0);

    Car car1("Rolls-Royce", "Phantoms", 2025, "Silver");

    // Calls the constructors that we set up

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    std::cout << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';

    std::cout << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';

    std::cout << '\n';

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    return 0;
}