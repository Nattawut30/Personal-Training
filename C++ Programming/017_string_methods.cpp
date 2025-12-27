#include <iostream>

int main()
{

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // get a length of string
    if(name.length() > 12)
    {
        std::cout << "Your name can't be over 12 characters";
    }
    else if(name.empty())
    {
        std::cout << "You didn't enter your name!";
    }
    else
    {
        std::cout << "Welcome, " << name;
    }

    // name.clear();
    // std::cout << "Hello, " << name;
    // the name has been cleared

    std::cout << '\n';
    name.append("@gmail.com");
    std::cout << "Your username is now " << name;

    std::cout << '\n';
    std::cout << name.at(0);

    std::cout << '\n';
    name.insert(0, "$");
    std::cout << name;

    std::cout << '\n';
    std::cout << name.find('B');

    std::cout << '\n';
    name.erase(0, 3);
    std::cout << name;

    return 0;
}