#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	cout << "input the value: ";
	cin >> str;
	
	string str2;
	int strlen = str.length();
	cout << str;
	

	for(int i = strlen-1;i>=0 ;i--) 
	{
		str2 = str2 + str[i];
	}
	
	cout << endl;
	if(str == str2)
	{
		cout << "pelledium";
	cout << endl;
		
	}
	else
	{
		cout << "non pelledium";
	cout << endl;
		
	}
}