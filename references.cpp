#include<iostream>
using namespace std;
int main()
{
	int value1=10;
	int &value2=value1;
	value2=13;
	cout<<value1<<endl;
}
