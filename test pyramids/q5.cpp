#include <iostream>
using namespace std;

int main(){
        int rows;
        int a = 0;
        int b = 0;
        int c = 0;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= rows; ++j) {
            cout << "  ";
            ++a;
        }
      
    }
}