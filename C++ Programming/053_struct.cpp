#include <iostream>

// looks like they're grouping!
struct student
{
    std::string name;
    double gpa;
    bool enroll;
};

int main()
{
    /*

    struct = A structure that group related variables under one name
    structs can contain many different data types (string, int, double, bool, etc.)
    variables in a struct are know as "Member"
    members can be access with. "Class member Access Operator"
    
    */

    student student1;
    student1.name = "Leon Kenedy";
    student1.gpa = 3.4;
    student1.enroll = true;

    student student2;
    student2.name = "Chris Redfield";
    student2.gpa = 2.8;
    student2.enroll = true;

    student student3;
    student3.name = "Ethan Winters";
    student3.gpa = 2.1;
    student3.enroll = false;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enroll << '\n';
    
    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enroll << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enroll << '\n';

    return 0;
}