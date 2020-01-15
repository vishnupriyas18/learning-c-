#ifndef CAT_H_
#define CAT_H_
#include<iostream>
#include<string.h>
using namespace std;
class cat
{
private:
	bool happy;
	bool hungry;
	string name;
public:
	void speak();
	void jump();
	void setSad();
	void setHappy();
	void setHungry();
	void setNotHungry();
	cat();
	~cat();
	void setName(string newName);
	string getName();
};
#endif
