#include <iostream>

using namespace std;

int main()
{
	cout << "pointers: " << endl << endl;
	
	int a = 5;
	
	int *p;
	
	p = &a;
	
	cout << "address: " << p << "  " << "value: " << *p ;
	
	
	
	
	
	
	int arr[3] = {1, 2, 3};
	int *p[3];
	for(int i=0;i < 3;i++) 
	{
		p[i] = &arr[i];
		cout << "address: " << p[i] << "  " << "value: " << *p[i] << "  " << endl;
	}
	
	
	
	
	
	// chain 
	int a = 5;
	int *p1 = &a;
	int **p2 = &p1;
	
	cout << a << endl;
	cout << *p1 << endl;
	cout << **p2 << endl;
}