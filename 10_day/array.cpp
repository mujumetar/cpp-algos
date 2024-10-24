#include<iostream>
using namespace std;

int main(){
    int s;
    cout << "input the size of an arrey: ";
    cin << s;
    int a[s] = {1, 2, 3, 4, 5};

    s = sizeof(a) / sizeof(a[s]);
    
}