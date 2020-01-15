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
	dog();
	dog(string name,int age);
	string toString();
};
#endif
