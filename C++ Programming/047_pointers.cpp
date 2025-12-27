#include <iostream>

int main()
{
    /*
    
    pointers = variable that stores a memory address of another variable
    sometimes it's easier to work with an address!

    & address-of operator
    * dereference operator
    
    */

    // it should be of the same data type as the variable it's pointing to.
    std::string name = "Nattawut-Boonnoon";
    int age = 25;

    // I  won't carry 5 pizzas and hand it to them, let them know my address. 
    // so, they would come and get their free pizza.
    std::string freePizzas[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas; // array = is already an address

    // my pointers contains this value
    // it contains a memory address as its value
    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';

    std::cout << *freePizzas << '\n'; // tell' em the memory address by *


    return 0;
}