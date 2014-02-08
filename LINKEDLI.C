/*1. given a number as input, create a single linked list for the number. example: 1234 as input you shoudl create a linked list which is in memory like 1->2->3->4 (you can print but youshould have a linked list in the data structure as well, not just print)*/

#include<stdio.h>
#include<conio.h>
struct  node
{
	struct node *next;
	int data;
};

void main()
{
	struct node *first,*t;
	int n,r;
	first=NULL;
	clrscr();
	printf("Enter a Number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		t=(struct node *)malloc(sizeof(struct node));
		t->data=r;
		t->next=first;
		first=t;
		n=n/10;
	}
	while(t!=NULL)
	{
		printf("%d",t->data);
		if(t->next!=NULL)
		printf("->");
		t=t->next;
	}
	getch();
}