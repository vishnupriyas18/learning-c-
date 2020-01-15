#include<iostream>
#include"cat.h"
using namespace std;
cat::cat()
{
	cout<<"Cat created"<<endl;
}
cat::~cat()
{
	cout<<"Cat destroyed"<<endl;
}
void cat::speak()
{
	if(happy)
	{
		cout<<"Meoww......"<<endl;
	}
	else
	{
		cout<<"Grrrr....Sssss...."<<endl;
	}
}
void cat::setHappy()
{
	happy=true;
}
void cat::setSad()
{
	happy=false;
}
void cat::setHungry()
{
	hungry=true;
	setSad();
}
void cat::setNotHungry()
{
	hungry=false;
	setHappy();
}
void cat::jump()
{
	cout<<"Jumping to the top of bookcase!"<<endl;
}
void cat::setName(string newName)
{
	name=newName;
}
string cat::getName()
{
	return name;
}
