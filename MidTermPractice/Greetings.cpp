#include "Greetings.h"
#include <iostream>
using namespace std;

Greetings::Greetings(string name, int temperature)
{
	this->name = name;
	this->temperature = temperature;
}
void Greetings::printmessage()
{
	cout << "Hello, " << this->name << ". The Temperature is " << this->temperature << " degrees. " << this->createmessage() << "\n";
}
string Greetings::createmessage()
{
	if (this->temperature >= 90)
	{
		return "It is to Hot!!!";
	}
	else if (this->temperature >= 80)
	{
		return "It is a little Hot!!!";
	}
	else if (this->temperature >= 70)
	{
		return "It is Cool!!!";
	}
	else if (this->temperature >= 40)
	{
		return "It is getting Cold!";
	}
	else
	{
		return "It is Cold!!!";
	}
	return this->createmessage();
}