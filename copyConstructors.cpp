#include<iostream>
using namespace std;
class animal
{
	private:
		string name;
	public:
		animal(){cout<<"Animal created"<<endl;		};
		animal(const animal& other){cout<<"Animal created by copying"<<endl;		}
		void setName(string name){this->name=name;		};
		void speak() const{
			cout<<"My name is "<<name<<endl;
		};
};
int main()
{
	animal animal1;
	animal1.setName("Rocky");
	animal animal2=animal1;
	animal2.speak();
	animal2.setName("Pinky");
	animal1.speak();
	animal2.speak();
}
