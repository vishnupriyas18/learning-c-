#include<iostream>
using namespace std;
int main()
{
	bool value=true;
	cout<<value<<endl<<endl;
	
	char cValue='g';
	cout<<cValue<<endl;
	cout<<(int)cValue<<endl;
	cout<<"Size of char: "<<sizeof(char)<<endl<<endl;
	
	wchar_t wValue='i';
	cout<<(char)wValue<<endl;
	cout<<wValue<<endl;
	cout<<"Size of wchar_t: "<<sizeof(wchar_t)<<endl<<endl;
}
