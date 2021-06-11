#include <iostream>

using namespace std;

int main()
{

    // I have to declare number since this is not the tester...

    int number{2};
    int original_number = number;
    //-- Multiply number by 2 and assign the result back to number

    number *= 2;

    //-- Add 9 to number and assign the result back to number

    number += 9;

    //-- Subtract 3 from number and assign the result back to number

    number -= 3;

    //-- Divide number by 2 and assign the result back to number

    number /= 2;

    //-- Subtract original_number from number and assign the result back to number

    number -= original_number;

    //-- Take the modulus 3 (%) of number and assign it back to number

    number %= 3;

    return 0;
}