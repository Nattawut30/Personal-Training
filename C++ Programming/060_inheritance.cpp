#include <iostream>

// Parent Class (1, 2)
class Animal
{
    public:
        bool alive = true;
    
    void eat()
    {
        std::cout << "This animal is NOM NOM NOM\n";
    }
};

// Parent Class (3, 4)
class Shape
{
    public:
        double area;
        double volume;
};

// Child 1, Class
class Dog : public Animal
{
    public:
    
    void bark()
    {
        std::cout << "The dog goes woof!\n";
    }
};

// Child 2, Class
class Cat : public Animal
{
    public:

    void meow()
    {
        std::cout << "The cat goes meow!\n";
    }
};

// Child 3, Class
class Cube : public Shape
{
    public:
        double side;
        Cube(double side)
        {
            this->side = side;
            this->area = side * side * 6;
            this->volume = side * side * side;
        }
};

// Child 4, Class
class Sphere : public Shape
{
    public:
        double radius;
    Sphere(double radius)
    {
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4 / 3.0) * 3.14159 * (radius * radius * radius);
    }
};

int main()
{
    /*
    
    inheritance = A class can recieve attributes and moethods from another class
    Children classes inherit from a Parent class
    Helps to reuse similar code found within multiple classes
    
    */

    Dog dog;
    Cat cat;
    Cube cube(10);
    Sphere sphere(5);

    std::cout << dog.alive << '\n';
    dog.eat(); // invoke it
    dog.bark();

    std::cout << '\n';

    std::cout << cat.alive << '\n';
    cat.eat();
    cat.meow();

    std::cout << '\n';

    std::cout << "Cube Area: " << cube.area << "cm\n";
    std::cout << "Cube Volume: " << cube.volume << "cm\n";

    std::cout << '\n';

    std::cout << "Sphere Area: " << sphere.area << "cm\n";
    std::cout << "Sphere Volume: " << sphere.volume << "cm\n";

    return 0;

    // A class can inherit attributes and methods from another class
    // if you have multiple classes and they share similar attributes methods
    // you can place them within a parent class
    // and all of those individual classes can inherit from that one common class
    // Just make code simple, readability, and not repeat itself!

}

// End of the class!
// By Nattawut Boonnoon