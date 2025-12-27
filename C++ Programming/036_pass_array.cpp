#include <iostream>

double getTotal(double prices[], int size);
// pass an additional arugument to let the function the size

int main()
{
    /*

    "Pass an array to the functions"

    when you pass an array to a function
    you only have to pass the array name such as, name[]
    you don't need a set of square breakets when you do so

    but when a function receives an array
    it decay into a pointer and the functions
    no longer knows what the size of the array is

    we could treat as an additional arguments
    to let the function know what the size is
    which we could then use to you know iterate over the array

    */

    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]); // explicity let the function know what the size is
    double total = getTotal(prices, size);
    // invoke this function we can pass in the array
    // as well as the size of the array

    std::cout << "The total is: $" << total;


    return 0;
}

// the pointers
// use only prices[] is enough 
// points to the address of where the array begins

double getTotal(double prices[], int size) 
// let the function know the size

{
    double total = 0;

    for(int i = 0; i < size; i++)
    {
        total += prices[i];
    }

    return total;

    // accept an array as an argument!

}