#ifndef DOG_H_
#define DOG_H_
#include<iostream>
using namespace std;
class dog
{
private:
	string name;
	int age;
public:
	dog():name("undefined"),age(0){};
	dog(string name,int age);
	string toString();
};
#endif
