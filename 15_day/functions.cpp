	#include<iostream>
	using namespace std;

	void tnrn()
	{
		cout << "take nothing,return nothing: ";	
	}
	
	void tsrn(int b)
	{
		cout << "take something,return nothing : " << endl;	
		if(b > 5) 
		{
			cout << "a is greater than 5" << endl;
		}
		
		else
		{
			cout << "a is less than 5" << endl;
			
		}	
	}
	void sum(int x, int y)
	{
		cout << "an addition of the b & c is: " <<  x + y << endl;	
		cout << "an substraction of the b & c is: " <<  x - y << endl;	
		cout << "an multiplication of the b & c is: " <<  x * y << endl;	
		cout << "an division of the b & c is: " <<  x / y << endl;
	}
	
	void prime(int m)
	{
	if (count == 0)
	{
		cout << " is prime number" << endl;
	}
	else
	{
		cout << " is not prime number";
	}

	}



	int main()
	{
	// tnrn();
	// cout << endl;
		
	// 	int a;
	// 	cout << "enter the value: ";
	// 	cin >> a;

	// 	tsrn(a);		
		
	// 	int b;
	// 	int c;
	// 	cout << "enter the value of b: ";
	// 	cin >> b;
	// 	cout << "enter the value of c: ";
	// 	cin >> c;
		
	// 	sum(b ,c);
		
		int m = 5;
		
		
		 int count = 0;

  for (int i = 2; i < m; i++)
	{
		if (m % i == 0)
		{
			count++;
		}
	}

 

		prime(m);
	}