#include <iostream>
using namespace std;

int main (){

    cout << endl;
    int a = 0;
     for (int b = 1; b <= 5; b++)
    {
        if(b == 1 || b == 3){
            cout << "* * * * *";  
        }

        else if(b == 4 || b == 5){
            cout << "*        ";
        }

        else{
            cout << "*       *";
        }
            
    
        cout << endl;
    }
    cout << endl;
    cout << endl;

}