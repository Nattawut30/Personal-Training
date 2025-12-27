#include <iostream>

void sort(int array[], int size);

int main()
{
    /*

    bubble sort:
    we begin at index 0
    if element on the left is larger than the element on the right
    we need to swap these 2 elements
    maybe move it within some temporary storage like a temp. variable
    push it to left and temp. place it within that opening again
    repeat the process until job done

    */

    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 4};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    for (int element : array)
    {
        std::cout << element << "";
    }

    return 0;
}

void sort(int array[], int size)
{
    int temp;
    for(int i = 0; i < size - 1; i++)
    // we don't need to compare the last element to anything
    // the larger values will natually gravitate
    // towards the end of the array increment i by one
    // then we'll need a nested for loop
    {
        for(int j = 0; j < size - 1; j++)
        {
            // if element on the left is larger then the element on the right
            // swap
            
            if(array[j] > array[j + 1])
            // < for descending orders 10, 9, 8 ...
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}