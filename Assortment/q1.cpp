#include<iostream>
using namespace std;

int main(){
	int size;
	
	cout << "Enter The Size Of The Arrey: ";
	cin >> size;
	
	int a[size];
	
	for(int i = 0;i <= size; i++) 
	{
		cout << "a["<< i <<"]: ";
		cin >> a[i];
	}
	cout << endl;
	
	cout << a[size];
	
	
}