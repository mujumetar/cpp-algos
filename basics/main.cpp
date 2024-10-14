#include <iostream>
using namespace std;

int main()
{
    // -------------------------------------------------------------------------- operators

    // int a = 100;
    // int b = 10;

    // cout << "addition of  a + b = " << a + b << endl;
    // cout << "substraction of  a + b = " << a - b << endl;
    // cout << "Multiplication of  a + b = " << a * b << endl;
    // cout << "division of  a + b = " << a / b << endl;
    // cout << "modal of  a + b = " << a % b << endl;

    // -------------------------------------------------------------------------  condition

    // int number;

    // cout << "Enter an integer: ";
    // cin >> number;

    // if (number > 18)
    // {
    //     cout << "You can vote because your age is : " << number << endl;
    // }

    // else if (number < 18)
    // {
    //     cout << "You can't vote because your age is : " << number << endl;
    // }

    // else
    // {
    //     cout << "You can vote when you get your voter I'd : " << endl;
    // }

    // -------------------------------------------------------------------------------- loops

    // we have three types of loop --------
    // 1. for
    // 2. while
    // 3. do while

    for (int i = 0; i < 101; i++)
    // for (int i = 0; i < 101; i+= 2) you can change the values
    {
        cout << "the Looped for " << i << "\n";
    }

    int i = 0;
    while (i < 100)
    {
        cout << "while i is == stop the loop: " << i << "\n";
        i++;
        // i+=2; you can change the values
    }

    int i = 1;
    do
    {
        cout << "(while) do when i is 100 stop the loop now i is: " << i << "\n";
        i++;
        // i+=2; you can change the values
    } while (i < 100);
};