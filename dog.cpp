#include"dog.h"
#include<sstream>
dog::dog(string name,int age)
{
	this->name=name;
	this->age=age;
}
string dog::toString()
{
	stringstream x;
	x<<"Name: ";
	x<<name;
	x<<"; Age: ";
	x<<age;
	return x.str();
}
