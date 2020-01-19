#include<iostream>
using namespace std;
class animal
{
private:
	string name;
public:
	void setname(string newName){
		name=newName;
	}
	void speak() const{
		cout<<"My name is "<<name<<endl;
	}
};
int main()
{
	animal animal1;
	animal1.setname("Rocky");
	animal1.speak();
	int value=8;
	int* pvalue=&value;
	cout<<*pvalue<<endl;
	int num=11;
	pvalue=&num;//error with int* const pvalue=&value
	*pvalue=12;//error with const int* pvalue=&value
	//error for both with const int* const pvalue=&value
	cout<<*pvalue<<endl;
}
