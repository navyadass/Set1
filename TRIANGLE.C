/*2. given three co-ordinates X1, X2, X3, write code to find whether the points make a triagle or not and also what type of triangle (equilateral, right angle, isosceles ..)*/

#include<conio.h>
#include<stdio.h>
#include<math.h>

float distance(float x1,float y1,float x2,float y2)
{
	return sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}

void main()
{
	float a,b,c,ax,ay,bx,by,cx,cy;
	clrscr();
	printf("Enter co-ordinates of A\n");
	printf("X-axis:");
	scanf("%f",&ax);
	printf("Y-axis:");
	scanf("%f",&ay);
	printf("Enter co-ordinates of B\n");
	printf("X-axis:");
	scanf("%f",&bx);
	printf("Y-axis:");
	scanf("%f",&by);
	printf("Enter co-ordinates of C\n");
	printf("X-axis:");
	scanf("%f",&cx);
	printf("Y-axis:");
	scanf("%f",&cy);

	a=distance(ax,ay,bx,by);
	b=distance(bx,by,cx,cy);
	c=distance(cx,cy,ax,ay);

	if((a+b>c)&&(a+c>b)&&(b+c>a)&&(a>0)&&(b>0)&&(c>0))
	{
		if(a==b&&b==c)
			printf("Equilateral Triangle");
		else if(a==b||b==c||c==a)
			printf("Isosceles Triangle");
		else
			printf("Scalene Triangle");
	}
	else
	{
		printf("Triangle formation is not possible");
	}
	getch();
}