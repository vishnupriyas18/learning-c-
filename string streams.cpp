#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	string name="Jack";
	int age=45;
	stringstream ss;
	ss<<"Name : ";
	ss<<name;
	ss<<"; Age :";
	ss<<age;
	string info=ss.str();
	cout<<info<<endl;
}
