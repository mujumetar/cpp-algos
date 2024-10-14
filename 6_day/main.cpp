#include <iostream>
using namespace std;

int main()
{
    int ld = 0;
    int n;

    cout << "enter the value: ";
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        ld = n % 10;
        sum = sum + ld;
        n = n / 10;
    }
    cout << sum << endl;

    //     int ld = 0;
    //     int n;

    //     cout << "enter the value: ";
    //     cin >> n;
    //     int sum = 0;
    //    while (n > 0)
    //    {
    //     ld = n % 10; // number divided by 10 in this case we got a last digit
    //     sum = sum + ld; // this is a sum statement for our addition of a sum value which was 0
    //     n = sum / 10; // this is an input field - it divide the whole input value by 10
    //    }
    //    cout << sum << endl;
}