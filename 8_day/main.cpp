#include <iostream>
using namespace std;

int main (){
    int a = 0;
     for (int b = 1; b <= 4; b++)
    {
        // for (int c = 1;c <=5; c++){
            // if (b % 2 == 1)
            // {
            //     cout << "*" << " ";
            // }
            // else if (b % 2 == 0){
               
            //     if (b <= c && b >= c){
            //         cout << "*" << " ";
                   
            //     }

            // }

            if(b==1 || b==3){

                cout << "* * * * *";
            }
            else{
                cout << "*       *";
            }
        // }
                
        cout << endl;
    }

}