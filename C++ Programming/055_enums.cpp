#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3,
         thursday = 4, friday = 5, saturday = 6};

enum Flavor {vanilla, chocolate, strawberry, mint};

enum Color {red, orange, yellow, green, blue, purple};

enum Planet {mercury = 4880, venus = 12104, earth = 12756, // size of planets
            mars = 6794, jupiter = 142984, saturn = 108728,
            uranus = 51118, neptune = 49532, pluto = 2320};

int main()
{
    /*
    
    enums = a user-defined data type that consists
    of paired named-integer constants.
    GREAT if you have a set of potential options

    */

    Day today = sunday;

        // within the cases you can use associated
        // values as well

        // takes only one value of the set

        switch(today)
        {
        case sunday:    std::cout << "It is Sunday!\n";
                        break;
        case monday:    std::cout << "It is Monday!\n";
                        break;
        case tuesday:   std::cout << "It is Tuesday!\n";
                        break;
        case wednesday: std::cout << "It is Wednesday!\n";
                        break;
        case thursday:  std::cout << "It is Thursday!\n";
                        break;
        case friday:    std::cout << "It is Friday!\n";
                        break;
        case saturday:  std::cout << "It is Saturday!\n";
                        break;
         }

    return 0;
}