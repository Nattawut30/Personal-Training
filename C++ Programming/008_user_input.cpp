#include <iostream>

/* 

cout << (insertion operator)
cin >> (extraction operator)

*/

int main()
{
    std::string name;
    int age;

    std::cout << "What's your age? ";
    std::cin >> age;

    std::cout << "What's your full name? ";
    std::getline(std::cin >> std::ws, name);
    // get all the string, ws = white space

    std::cout << "Hello, " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;

    // we CANNOT run on the output, must change it to terminal
    // VS code only: 
    // 1. setting
    // 2. type 'code runner' 
    // 3. check box "Code-runner: Run In Terminal"
    return 0;
}