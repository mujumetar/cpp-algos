#include<iostream>
using namespace std;

int main() {

    // this is a  simple arrey format
    int a[6] = {1, 2, 3, 4, 5, 6};     

    // we can update via 
    a[4] = 10;  

// we can print via 
cout << a[0] << endl;
cout << a[1] << endl;
cout << a[2] << endl;
cout << a[3] << endl;
cout << a[4]; cout << " " << "<<< updated value"<< endl;   
cout << a[5] << endl;

=========================================================================== static way
=========================================================================== 
=========================================================================== 
// =========================================================================== dynamic way
int size,u;
cout << "enter the size of your arrey: ";
cin >> size;
int b[size] = {};
for (int i = 0;i < size;i++){
    cout << "b["<< i <<"] = ";
    cin >> b[i];

}
cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
cout << endl << endl;
for (int j = 0;j < size;j++){
    cout << "the value of ";
    cout << "b["<< j <<"] = ";
    cout << "is :  ";
    cout << b[j] << " " << endl;
}
cout << endl << endl;
cout << "==============================================================";
cout << endl << endl;
cout << "you can simply update your aray element: " << endl;
cout << "now please enter the arrey Index here: ";
cin >> u;
cout << "a["<< u <<"]= ";
cin >> b[u];
for (int j = 0;j < size;j++){
    cout << "the value of ";
    cout << "b["<< j <<"] = ";
    cout << "is :  ";
    cout << b[j] << " " << endl;

}

}