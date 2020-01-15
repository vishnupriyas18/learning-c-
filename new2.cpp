#include<iostream>
using namespace std;
int main()
{
	int seconds,hours,mins;
	cin>>seconds;
	hours=seconds/3600;
	mins=(seconds%3600)/60;
	seconds=seconds%60;
	cout<<hours<<"hrs"<<mins<<"mins"<<seconds<<"secs"<<endl;
}
