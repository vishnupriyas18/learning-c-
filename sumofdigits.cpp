#include<stdio.h>
int sumofdig(int x)
{
	int s=0;
	while(x!=0)
	{
		s+=(x%10);
		x=x/10;
	}
	return s;
}
int main()
{
	int n,sum,p;
	sum=0;
	p=n;
	scanf("%d",&n);
	while(n!=0)
	{
		sum+=(n%10);
		n=n/10;
	}
	printf("%d\n",sum);
	printf("%d\n",sumofdig(p));
}
