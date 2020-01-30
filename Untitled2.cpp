#include<stdio.h>
int sort(int *a,int size)
{
	int i,j,c;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(*(a+i)<*(a+j))
			{
				c=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=c;
			}
		}
	}
}
int selectionsort(int *a,int size)
{
	int i,j,min,c;
	for(i=0;i<size;i++)
	{
		for(j=i;j<size;j++)
		{
			min=*(a+size-1);
			if(*(a+j)<*(a+i))
				min=*(a+j);
		}
		c=*(a+i);
		*(a+i)=min;
		min=c;
	}
}
int main()
{
	int x[100],size,i;
	scanf("%d",&size);
	for(i=0;i<size;i++)
		scanf("%d",&x[i]);
	selectionsort(x,size);
	for(i=0;i<size;i++)
		printf("%d ",x[i]);
}
