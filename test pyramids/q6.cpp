#include <iostream>
using namespace std;

int main(){
        int rows = 5;

    for(int i = 1; i <= 5; i++) {

        for(int j = 1; j <= i; j++) {
          cout << j << " ";
        }


        for(int j = 4; j >= i; j--) {
          cout << "  ";
        }

        for(int j = 4; j >= i; j--) {
          cout << "  ";
        }

        for(int j = i; j >= 1; --j) {
          cout << j << " ";
        }

      
      cout << endl;
    }
}