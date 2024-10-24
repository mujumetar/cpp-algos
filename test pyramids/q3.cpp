#include <iostream>
using namespace std;

int main(){
int count = 1; 
    for (int i = 5; i >= 1; i--) 
    {

         for (int k = 1; k < i; k++) 
        {
            cout << " " << " " ;     

        }

        for (int j = i; j<=5; j++) 
        {
            cout << j << " ";     

        }
        cout << endl;
    }
}