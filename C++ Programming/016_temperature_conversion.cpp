#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "****** Temperature Conversion ******" << std::endl;

    std::cout << "F = Fahrenheit" << std::endl;
    std::cout << "C = Celsius" << std::endl;
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if(unit == 'F'|| unit == 'f')
    {
        std::cout << "Enter themperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0; // convert to F
        std::cout << "Temperature is: " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter themperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.80; // convert to C
        std::cout << "Temperature is: " << temp << "C\n";
    }
    else
    {
        std::cout << "Please enter in only C or F\n";
    }

    std::cout << "*****************************" << std::endl;

    return 0;
}