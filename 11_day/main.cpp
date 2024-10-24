#include <iostream>
using namespace std;

int main(){
    int r, c, row, col;
    int els;


    cout << "enter the rows: ";
    cin >> r;
    cout << "enter the cols: ";
    cin >> c;
  
  int arr[r][c];

  
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){

            cout << "arr["<<i<<"]["<<j<<"]: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
   

    for(int i = 0; i<r; i++){
         for(int j = 0; j<c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "enter the value of rows: ";
    cin >> row;

    cout << "enter the value of col: ";
    cin >> col;

    cout << "enter the value of element: ";
    cin >> els;

    arr[row][col] = els;

    for(int i = 0; i<r; i++){
         for(int j = 0; j<c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}