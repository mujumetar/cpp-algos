#include<iostream>
using namespace std;

int main ()
{
	int size;
	cout << "please enter the size of this array: ";
	cin >> size;
	
	
	int a[size];
	for(int i=0;i<size;i++)
	{
		cout << "a["<< i <<"]: ";
		cin >> a[i];
		
	}
	cout << endl;
	
	
	
		int j;
	do
	{
		
		cout << "press 1 for update"<< endl;
		cout << "press 2 for read"<< endl;
		cout << "press 3 for delete"<< endl;
		cout << "press 4 for insert"<< endl << endl;
		
		cout << "select the operation: ";
		cin >> j;
		cout << endl;
		
		
		switch(j)
		{
			case 1: 
			cout << "you selected updation..." << endl << endl;
			
			int index;
			cout << "enter the index: ";
			cin >> index;
			cout << endl;
			
			cout << "enter the value: ";
			
			int u;
			
			cin >> u;
			
			a[index] = u;
			
			
			break;
			

			case 2: 
			cout << "you selected read..." << endl << endl;
				for(int i=0;i<size;i++)
					{
						cout << a[i] << " ";	
					}
					cout << endl;
			break;
			
			case 3: 
			cout << "you selected deletation..." << endl << endl;
			int pos;
			cout << "enter the index: ";
			cin >> pos;
			cout << endl;
			
			for(int z = pos+1;z<size;z++)
			{
				a[z-1]=a[z];
				cout << "deleted...!!!" << endl;
			}
			size--;
			break;
			
			
			case 4: 
			cout << "you selected insertion..." << endl << endl;
			int ind;
			cout << "enter the index: ";
			cin >> ind;
			cout << endl;
			
			
			int el;
			cout << " enter the element: ";
			cin >> el;
			
			for(int i=size;i>=ind;i--)
			{
				a[i+1]= a[i];
			}
			size++;
			a[ind] = el;
			break;
			
		}
		
		
	}while(j != 0);
}