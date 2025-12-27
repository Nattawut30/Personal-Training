#include <iostream>

int searchArray(int array[], int size, int element);
// this function will return an integer the index that we searching for

int main()
{
    // linear search
    
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if(index != -1)
    {
        std::cout << myNum << " is at index " << index;
    }
    else
    {
        std::cout << myNum << " is not in the array";
    }

    return 0;
}

// create an function that will search an array for us
int searchArray(int array[], int size, int element)
{
    for(int i = 0; i < size; i++)
    {
        if(array[i] == element)
        {
            return i;
        }
    }
    return -1;
    // negative one in programming
    // serves as a sentinel value if you see nagative 1
    // something wasn't found we'll return either i or negative 1
    // then assign it to this index variable within the main function
}
