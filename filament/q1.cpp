#include <iostream>
#include <string>

using namespace std;

int main()
{
	 char str[50], str2[50];



	cout << "Enter a string to check for Palindrome: ";
	cin >> str;
	
	int len=0;
	
	for(int i=0; i< str[i] != '\0'; i++)
	{
		len++;
	}
	
	// cout << len;

	
	// j = str.length() - 1;
	
	int j=0;
	
	for(int i=len-1;i >=0; i--)
	{
		str2[j] = str[i];
		++j;
	}
	
	// cout << j;
	
	cout << sizeof(str) << ", " << sizeof(str2) <<endl;
	
	cout << str2 << ", " << str;
	
	
	
	// if (str2 == str) 
	// {
	// 	cout << "The is a palindrome." << endl;
	// } 
	// else 
	// {
	// 	cout << "The is not a palindrome." << endl;
	// }

	return 0;
}