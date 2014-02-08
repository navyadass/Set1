/*1. given a number as input, create a single linked list for the number. example: 1234 as input you shoudl create a linked list which is in memory like 1->2->3->4 (you can print but youshould have a linked list in the data structure as well, not just print)*/

#include<iostream.h>
#include<conio.h>
class node
{
	public:
		int data;
		node *link;
};

class numll
{
	public:
		node *first;
		numll()
		{
			first=NULL;
		}
		void create(int);
		void display();
};

void numll::create(int n)
{
	int r;
	while(n!=0)
	{
		r=n%10;
		node *temp=new node;
		temp->data=r;
		temp->link=first;
		first=temp;
		n=n/10;
	}
}

void numll::display()
{
	node *t=first;
	while(t!=NULL)
	{
		cout<<t->data;
		if(t->link!=NULL)
		cout<<"->";
		t=t->link;
	}
}

void main()
{
	int n;
	numll ll1;
	clrscr();
	cout<<"Enter a Number:" ;
	cin>>n;
	ll1.create(n);
	ll1.display();
	getch();
}