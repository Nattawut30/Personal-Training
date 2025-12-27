#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main()
{
    /*

    Luh Algorithm

    1. Double every second digit from right-to-left
    if doubled number is 2 digits, split them
    2. Add all single digits from step 1
    3. Add all odd numbered digits from right to left
    4. Sum results from steps 2 & 3
    5. If step 4 is divisble by 10, # is valid

    Ex.

    6011000990139424

    6011 | 0009 | 9013 | 9424 // concerned with every second-digit from right-left
    1 2  2 | 0  0 | 1 8 2 | 1 8  4 // double the number if the answer is 2 digit split again
    sum all = 29

    6011 | 0009 | 9013 | 9424 // now concered odd number right-to-left
    0 1     0 9     03      44 // no need to double them
    summ al = 21

    sum (1) & (2) = 29 + 21 = 50 // get (1) + (2)

    50 % 10 = 5 // modulus by 10 pass = valid

    */

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0)
    {
        std::cout << cardNumber << " is valid!";
    }
    else
    {
        std::cout << cardNumber << " is Invalid!";
    }

    return 0;
}

int getDigit(const int number)
{
    return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;

    // change it to 1
    for(int i = cardNumber.size() - 1; i >= 0; i-=2) // begin at the end
    {
        sum += cardNumber[i] - '0'; // no need to double the odd digit
    }

    return sum;
}

int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;

    // we'll need the second to last digit
    for(int i = cardNumber.size() - 2; i >= 0; i-=2) // we need even digit
    {
        sum += getDigit((cardNumber[i] - '0') * 2); // we treat cardnumber as string character
    }

    return sum;
}