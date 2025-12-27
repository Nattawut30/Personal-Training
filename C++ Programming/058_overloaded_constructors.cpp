#include <iostream>

class Pizza
{
    public:
        std::string topping1;
        std::string topping2;

    Pizza(std::string topping1)
    // we can create an additional constructor that accepts
    // different arguments. Let's copy what we have and paste it
    {
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }  
    Pizza(){} // put this with no arguments for pizza3

};

int main()
{
    /*
    
    overloaded constructors = Multiple constructors with the same name but different parameters
    allows for varying arguments when instantiating an object
    
    */

    Pizza pizza1("Peperoni");
    Pizza pizza2("mushrooms", "peppers");
    Pizza pizza3;

    std::cout << pizza1.topping1 << '\n';
    std::cout << pizza2.topping1 << '\n';
    std::cout << pizza2.topping2 << '\n';

    return 0;
    
    // OC allow for multiple objects with a varying number of attributes
}