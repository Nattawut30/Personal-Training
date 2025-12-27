#include <iostream>

int main()
{
    /*
    
    fill() = Fills a range of elements with a specified value
    fill(begin, end, value)
    
    */

    
    // std::string foods[10] = {"Pizza", "Pizza", "Pizza", "Pizza", "Pizza", "Pizza", "Pizza", "Pizza", "Pizza", "Pizza"};

    // std::string foods[10];
    // fill(foods, foods + 10, "Pizza");

    const int size = 9;
    std::string foods[size];

    fill(foods, foods + size, "Pizza!");

    // divided into 3 parts for each elements
    fill(foods, foods + (size/3), "pizza");
    fill(foods + (size/3), foods + (size/3)*2, "hamburger");
    fill(foods + (size/3)*2, foods + size, "hotdog");

    for(std::string food : foods)
    {
        std::cout << food << '\n';
    }

    return 0;
}