#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=1;i<=1000;i++)
	{
		cout<<".";
		if(i%50==0)
			cout<<endl;
	}
}
