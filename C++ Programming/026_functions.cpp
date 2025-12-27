#include <iostream>

void happyBirthday(std::string name, int age); // define it

int main() // your main function is your house
{
    /*

    function = a block of reuseable code

    */

    std::string name = "Fluke";
    int age = 25;

    happyBirthday(name, age); 
    // Calls your function

    return 0;
}

// anything out side your main function is your neighbors hourse
// you can't see anything inside your neighbors hourse, right?
// so we need to define it, or get to know them first
// by matching the parameters

// you can actually rename your parameters

void happyBirthday(std::string birthdayBoi, int age)
{
    std::cout << "Happy Birthday to "<< birthdayBoi << '\n';
    std::cout << "Happy Birthday to " << birthdayBoi << '\n';
    std::cout << "Happy Birthday dear " << birthdayBoi << '\n';
    std::cout << "You are now " << age << " years old!";
}