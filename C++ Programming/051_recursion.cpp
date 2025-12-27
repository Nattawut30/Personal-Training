#include <iostream>

void walk(int steps);

int factorial(int num);

int main()
{
    /*
    
    recursion = a programming technique where a function
    invokes itself from within
    break a complex concept into a repeatable single steps

    void doSTHG(){
    
        doSTHG();

    }

    iterative vs recursion
    
    Pros = less code and is cleaner
    useful for sorting and seaching algorithms

    Cons = uses more memory and slower
    
    */

    walk(10);

    std::cout << factorial(5);

    return 0;
}

void walk(int steps)
{
    if(steps > 0)
    {
        std::cout << "You take a step!\n";
        walk(steps - 1);
    }
}

int factorial(int num)
{
    if(num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}

// code are more cleaner!
// Very useful when you learn DSA-C++