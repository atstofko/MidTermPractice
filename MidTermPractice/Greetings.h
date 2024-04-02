#pragma once
#include <string>
using namespace std;

class Greetings
{
private:
	string name;
	int temperature;
	string createmessage();
public:
	 Greetings(string, int);
	 void printmessage();
};

