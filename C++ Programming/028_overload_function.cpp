#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);
// define the same name just different parameters!

int main()
{
    bakePizza("Pepperoni", "Hawaiian");

    return 0;
}

// It's can shared the same name but
// You need to a different set of parameters

void bakePizza()
{
    std::cout << "Here is your Pizza!\n";
}
void bakePizza(std::string topping1)
{
    std::cout << "Here is your " << topping1 << " pizza!\n";
}
void bakePizza(std::string topping1, std::string topping2)
{
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}