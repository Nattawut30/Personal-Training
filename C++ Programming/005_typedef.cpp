#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t // t for type
// an existing data type it helps with code readability

typedef std::string text_t;
typedef int number_t;

// 'using' is more popular than typedef
using message_t = std::string;
using order_t = int;

// basically, its assign values and data type before use it

int main() {

    /*

    typedef = reserved keyword used to create an additional name
    (alias) for another data type.
    New identifier for an existing type
    Helps with readability and reduces typos
    Use when there is a clear benefit
    Replaced with 'using' (work better w/ templates)

    */

    text_t firstName = "Fluke";
    number_t age = 25;
    message_t email = "Hey, call me back!";

    std::cout << firstName << std::endl;
    std::cout << age << std::endl;
    std::cout << email << std::endl;


    return 0;
}