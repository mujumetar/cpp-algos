#include <iostream>

#include<stdio.h>
#include <string>
using namespace std;


int cube();

int main () 
{


cube();
	
	
}


int cube()
{	
	
	
	int arr[2][2] = {{3, 2},
					{4, 5}};
					
	 int *p[2][2];
					
		
					for(int i=0; i<2; i++)
					{
						for(int j=0; j<2; j++)
						{
							
							p[i][j] = &arr[i][j];
							cout << *p[i][j] << " ";
							// cout << arr[i][j]*arr[i][j]*arr[i][j] << " ";
						}
						cout << endl;
					}
}