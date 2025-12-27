#include <iostream>

int main()
{
    /*

    2D array = {array1, array2, array3}
    represent matrix of data (column, row)

    */

    // first array is rows, second is column
    std::string cars[][3] = {{"Mustang", "Escaper", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram-1500"}};

    // looks like a grid made up of rows and columns in the matrix

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    std::cout << cars[0][0] << " ";
    std::cout << cars[0][1] << " ";
    std::cout << cars[0][2] << "\n";

    std::cout << cars[1][0] << " ";
    std::cout << cars[1][1] << " ";
    std::cout << cars[1][2] << "\n";

    std::cout << cars[2][0] << " ";
    std::cout << cars[2][1] << " ";
    std::cout << cars[2][2] << "\n";

    std::cout << '\n';

    for(int i = 0; i < rows; i++) // outer loops in charge of the rows
    {
        for(int j = 0; j < columns; j++) // inner loops in charge of the columns
        {
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}