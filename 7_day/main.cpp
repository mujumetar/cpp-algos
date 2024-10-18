#include<iostream>
using namespace std;

int main()
{
    // simple nested pattern loop
    cout << endl
         << endl;
    cout << "simple nested pattern loop: ";
    int n;
    cout << endl;

    cout << "enter the value which you want to perform the pattern system :  ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // reverse loop demo of parent loop
    cout << endl
         << endl;
    cout << "reverse loop demo of parent loop:[j] printed :  ";
    cout << endl;


    cout << "enter the value which you want to perform the pattern system :  ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl
         << endl;
    cout << "reverse loop demo of parent loop: [i] printed :  ";
    cout << endl;


    cout << "enter the value which you want to perform the pattern system :  ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <= n; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    // reverse loop demo of child loop
    cout << endl
         << endl;
    cout << "reverse loop demo of child loop: [j] printed :   ";
    cout << endl;

    cout << "enter the value which you want to perform the pattern system :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl
         << endl;
    cout << "reverse loop demo of child loop: [i] printed :  ";
    cout << endl;

    cout << "enter the value which you want to perform the pattern system : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j >= 1; j--)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    // reverse loop demo of both loop
    cout << endl
         << endl;
    cout << "reverse loop demo of both loop: [j] printed :  ";

    cout << "enter the value which you want to perform the pattern system :  ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {

        for (int j = n; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
    cout << "reverse loop demo of both loop: [i] printed :  ";

    cout << "enter the value which you want to perform the pattern system :  ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}