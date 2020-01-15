#include"person.cpp"
int main()
{
	person person1;
	cout<<person1.toString()<<endl;
	person person2("siddu");
	cout<<person2.toString()<<endl;
	person person3("vishnu",18);
	cout<<person3.toString()<<endl;
	person person4("vanitha",40,50);
	cout<<person4.toString()<<endl;
	person person5("ashok",47,72,5.8);
	cout<<person5.toString()<<endl;
}
