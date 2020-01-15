#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float fvalue=145.267;
	cout<<fvalue<<endl;
	cout<<fixed<<fvalue<<endl;
	cout<<scientific<<fvalue<<endl<<endl;
	
	double dvalue=145.267;
	cout<<fixed<<dvalue<<endl<<endl;
	
	long double lvalue=145.267;
	cout<<fixed<<lvalue<<endl;
	cout<<setprecision(20)<<fixed<<dvalue<<endl<<endl;
}
