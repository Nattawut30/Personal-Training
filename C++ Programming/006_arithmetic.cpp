#include <iostream>

int main() {
    /*

    arithmetic operators
    return the result of a specific
    arithmetic operation (+ - * /)

    math counting orders:
    prenthesis
    multiplication & division
    addition & subtraction

    */

    int students = 6 - 5 + 4 * 3 / 2; // the answer should be 7
    // but if 6 - (5 + 4) * 3 / 2 = -7

    // students = students + 1;
    // students++; just +1
    // students+=1;

    // students = students - 2;
    // students-=2;
    // students--; just -1

    // students = students * 2;
    // students*=2;

    // students = students / 2;
    // students/=2;

    int remainder = students % 3; // divider into groups of 3 people will left 1 guy

    std::cout << students << std::endl;
    std::cout << remainder << std::endl;

    return 0;
}