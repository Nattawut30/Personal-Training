#include <iostream>

int main()
{
    /*

    sizeof() = determines the size in bytes of a:
    variable, data type, class, objects, etc.
    return "object" or "Container" not the length

    */
   
    std::string name = "Fluke is cool!";
    double gpa = 3.4;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string agents[] = {"Chris", "Leon", "Ada", "Grace"};

    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(grades)/sizeof(char) << " elements\n";
    std::cout << sizeof(agents)/sizeof(std::string) << " elements\n";

    return 0;

}