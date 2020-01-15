#include<iostream>
#include"cat.cpp"
using namespace std;
int main()
{
	cout<<"Starting program"<<endl;
	cat jolly;
	jolly.setHappy();
	jolly.speak();
	jolly.setSad();
	jolly.speak();
	jolly.setNotHungry();
	jolly.speak();
	{
		cat bob;
		bob.setHungry();
		bob.speak();
		bob.jump();
	}
	cat cat1;
	string name1;
	name1="chuttu";
	cat1.setName(name1);
	cout<<cat1.getName()<<endl;
	cout<<"Ending program"<<endl;
}
