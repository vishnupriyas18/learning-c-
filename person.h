#ifndef PERSON_H_
#define PERSON_H_
#include<iostream>
using namespace std;
class person
{
private:
	string name;
	int age;
	float weight;
	float height;
public:
	person();
	person(string newName);
	person(string newName,int newAge);
	person(string newName,int newAge,float newWeight);	
	person(string newName,int newAge,float newWeight,float newHeight);
	string toString();
};
#endif
