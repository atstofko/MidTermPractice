#include <iostream>
using namespace std;
#include "Greetings.h"

int main()
{
	string name;
	int temperature;
	cout << "Enter your Name ==> ";
	getline(cin, name);
	cout << "Enter the Temperature in F ==> ";
	cin >> temperature;
	Greetings greetings(name, temperature); 
	greetings.printmessage();
}
