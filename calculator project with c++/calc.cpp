#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "" << endl << endl;


    cout << "welcome to our calculator" << endl << endl;
    cout << "enter the first value :  ";
    cin >> a;

    cout << "enter the second value :  ";
    cin >> b;
    cout << "" << endl
         << endl;

    int c;
    cout << "now this is the answer of given value: " << endl << endl;

    cout << "this is the Addition of:  " << a << " " << "+" << " " << b << endl;
    cout << "== >" << "  " << a + b << endl << endl;
    cout << "this is the Multiplication of:  " << a << " " << "*" << " " << b << endl;
    cout << "== >" << "  " << a * b << endl << endl;
    cout << "this is the Subtraction of:  " << a << " " << "-" << " " << b << endl;
    cout << "== >" << "  " << a - b << endl << endl;
    cout << "this is the Division of:  " << a << " " << "/" << " " << b << endl;
    cout << "== >" << "  " << a / b << endl << endl;
    cout << "this is the Modulus of:  " << a << " " << "%" << " " << b << endl;
    cout << "== >" << "  " << a % b << endl << endl;
}