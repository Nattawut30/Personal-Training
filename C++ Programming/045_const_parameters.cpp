#include <iostream>

void printInfo(const std::string name, const int age);

int main()
{
    /*

    const parameter = parameter that is effectively read-only
    code is more secure & conveys intent
    useful for references and pointers

    */

    std::string name = "Fluke";
    int age = 25;

    printInfo(name, age);

    return 0;
}
void printInfo(const std::string name, const int age)
// we don't wanna change it at all on the parameters!
{

    std::cout << name << '\n';
    std::cout << age << '\n';
}
// technically we're not modifying the og variables
// in this case using const keyword when we pass a variable by value
// not big deal but at least conveys intent
