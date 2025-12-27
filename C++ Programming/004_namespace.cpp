#include <iostream>

// add it out of the main()

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

// preventing dubplicate values when working with the big team.

int main() {
    /*

    namespace = provides a solution for preventing name conflicts
    In large projects. Each entity needs a unique name.
    A namespace allows for identically named entities.
    as long as the name space are different.
    
    */

    int x = 0;

    std::cout << x << std::endl; 
    // compiler will se x in the main() by default for output, always

    std::cout << first::x << std::endl;
    // so, ask for a version of x that we want, x in fist version
    

    // safer alternative way to using namespace standard
    using std::cout;
    using std::string;

    string name = "Mr. Fluke";
    cout << "Hello, " << name << "!";

    // somehow more efficient and better?

    return 0;
}