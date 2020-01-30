#include <stdio.h>
int maximum(int a,int b,int c,int d)
{
	int max;
	max=(a > b? a : b);
	max = (c > d? (c > max? c : max) : (d > max? d : max));
	return max;  
}
int minimum(int a,int b,int c,int d)
{
	int min;
	min=(a < b? a : b);
	min = (c < d? (c < min? c : min) : (d < min? d : min));
	return min;
}
int main() 
{
	int x1,x2,y1,y2,l1,l2,w1,w2,x3,y3,l3,w3,minl,maxl,minw,maxw;
	scanf("%d%d%d%d",&x1,&y1,&l1,&w1);
	scanf("%d%d%d%d",&x2,&y2,&l2,&w2);
	if((x2>x1-l2)&&(x2<x1+l1)&&(y2>y1-w2)&&(y2<y1+w1))
	{
		printf("Invalid input");
	}
	else
	{
		if(x1>x2)
			x3=x2;
		else
			x3=x1;
		if(y1>y2)
			y3=y2;
		else
			y3=y1;
		maxl=maximum(x1,x2,x1+l1,x2+l2);
		minl=minimum(x1,x2,x1+l1,x2+l2);
		l3=maxl-minl;
		maxw=maximum(y1,y2,y1+w1,y2+w2);
		minw=minimum(y1,y2,y1+w1,y2+w2);
		w3=maxw-minw;
		printf("%d %d %d %d",x3,y3,l3,w3);
	}
}
