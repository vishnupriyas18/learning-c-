#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* root;
void insert()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		temp->link=root;
		root=temp;
	}
}
int count(struct node* p)
{
	int c=0;
	while(p!=NULL)
	{
		c++;
		p=p->link;
	}
	return c;
}
int function(int n)
{
	struct node* temp;
	temp=root;
	if(n>count(temp))
	{
		printf("Invalid input\n");
	}
	while(count(temp)>n)
	{
		temp=temp->link;
	}
	return temp->data;
}
void display()
{
	struct node* temp;
	temp=root;
	while(temp->link!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;
	}
	printf("%d\n",temp->data);
}
int main()
{
	int ch,ele,k;
	while(1)
	{
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				ele=count(root);
				break;
			case 3:
				scanf("%d",&k);
				ele=function(k);
				printf("%d",ele);
				break;
			case 4:
				exit(0);
			case 5:
				display();
		}
	}
}
