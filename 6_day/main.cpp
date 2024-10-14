#include <iostream>
using namespace std;

int main()
{
    // int ld = 0;
    // int n;

    // cout << "enter the value: ";
    // cin >> n;
    // int sum = 0;
    // while (n > 0)
    // {
    //     ld = n % 10;
    //     sum = sum + ld;
    //     n = n / 10;
    // }
    // cout << sum << endl;

    int ld = 0;
    int n;

    cout << "enter the value: ";
    cin >> n;
    int sum = 0;
    ld = n % 10;

    while (n > 10)
    {
        n = n / 10;
    }
    cout << n + ld << endl;
}