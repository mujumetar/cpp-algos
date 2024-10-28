#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main () {
	string u;
	string fn;
	string ln;
	int pass;
	int conp;
	// int cp = rand();
	
   
   
	cout << "enter your first name: ";
	cin >> fn;
	cout << "enter your last name: ";
	cin >> ln;
	 cout << "enter your username: ";
	cin >> u;


		cout << endl;
	cout <<"NOTE : please check the password must be in a int format = > " << endl;
		cout << endl;

	 cout << "enter your password: ";
	cin >> pass;
	 cout << "confirm your password: ";
	cin >> conp;

	cout << endl << endl;



	if(conp == pass) {
		cout << "your password is setted..." << endl; 
			if(conp == pass) {
				cout << endl;
				cout << "you are registered please login your account here: ";
				cout << endl;

				cout << "enter your username: ";
				cin >> u;
			

				if(u == u) {
					cout << "enter your password: ";
					cin >> pass;

					if(pass == pass) {
						cout << "---------------------------------------------------------------------------" << endl;
						cout << ":::::::::::::: congratulations !! successfully Logged In ::::::::::::::::" << endl;
						cout << "---------------------------------------------------------------------------" << endl;

					}
				}
			}
			
			else {
				cout << "sorry ";

			}
		
		cout << endl;
		cout <<"please check the details below than we proceed: ";
		cout << endl;


		cout << "your first name is :" << fn << endl;
		cout << "your last name is :" << ln << endl;
		cout << "your user name is :" << u << endl;
	}

	else {
		cout << "you are not verified " << endl << endl;
	}
}