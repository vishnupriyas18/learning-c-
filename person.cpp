#include"person.h"
#include<sstream>
person::person()
{
	name="undefined";
	age=0;
	weight=0.0;
	height=0.0;
}
person::person(string newName)
{
	name=newName;
	age=0;
	weight=0.0;
	height=0.0;
}
person::person(string newName,int newAge)
{
	name=newName;
	age=newAge;
	weight=0.0;
	height=0.0;
}
person::person(string newName,int newAge,float newWeight)
{
	name=newName;
	age=newAge;
	weight=newWeight;
	height=0.0;
}
person::person(string newName,int newAge,float newWeight,float newHeight)
{
	name=newName;
	age=newAge;
	weight=newWeight;
	height=newHeight;
}
string person::toString()
{
	stringstream ss;
	ss<<"Name: ";
	ss<<name;
	ss<<" ; Age: ";
	ss<<age;
	ss<<" ; Weight: ";
	ss<<weight;
	ss<<" ; Height: ";
	ss<<height;
	return ss.str();
}
