#include <iostream>
using namespace std;

int main()
{

    // // --------------------------------------------- for loop
    // cout << "for loop" << endl
    //      << endl;

    // for (int a = 0; a < 10; a++)
    // {

    //     cout << a << endl;
    // }

    // // --------------------------------------------- for loop reverse
    // cout << "for loop reverse" << endl
    //      << endl;

    // for (int a = 10; a >= 0; a--)
    // {
    //     cout << a << endl;
    // }

    // // --------------------------------------------- for loop with odd or even

    // cout << "for loop with odd" << endl
    //      << endl;

    // for (int b = 0; b <= 10; b++)
    // {

    //     if (b % 2 == 1)
    //     {
    //         cout << b << endl;
    //     }
    // }

    // cout << "for loop with even" << endl
    //      << endl;

    // for (int b = 0; b <= 10; b++)
    // {
    //     // --------------- you can use (b%2 == 0) for even numbers
    //     if (b % 2 == 1)
    //     {
    //     }

    //     else
    //     {
    //         cout << b << endl;
    //     }
    // }

    // cout << "for addition" << endl
    //      << endl;

    // int c = 0;

    // for (int b = 0; b < 10; b++)
    // {
    //     c = c + b;
    //     cout << c << endl;
    // }

    // // -------------------------------------------------------------
    cout << "for primary" << endl
         << endl;

    int c;

    cout << "Enter No: ";
    cin >> c;
    int count = 0;

    for (int b = 2; b < c; b++)
    {
        if (c % b == 0)
        {
            count++;
        }
    }

    if (count == 0)
    {
        cout << c << " is prime number" << endl;
    }
    else
    {
        cout << c << " is not prime number";
    }

    // ================================================================================
}