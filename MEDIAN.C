/*3. given two arrays which are sorted find the median element of both the arrays*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int *a,*b,n,m,i,j,k,p,x;
	clrscr();
	printf("Enter the sizes of TWO arrays:");
	scanf("%d%d",&n,&m);
	a=(int *)malloc(n*sizeof(int));
	b=(int *)malloc(m*sizeof(int));
	printf("Enter array1 in Ascending Order\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter arrey2 in Ascending Order\n");
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	i=0;
	j=0;
	k=0;
	if((n+m)%2==0)
		x=(n+m)/2;
	else
		x=(int)((n+m)/2)+1;
	while(k<x)
	{
		if(i<n&&j<m)
		{
			if(a[i]<b[j])
			{
				p=a[i++];
			}
			else
			{
				p=b[j++];
			}
		}
		else if(i<n&&j>m)
		{
			p=a[i++];
		}
		else if(j<m&&i>n)
		{
			p=b[j++];
		}
		k++;
	}
	if((n+m)%2!=0)
		printf("%d",p);
	else
	{
		if(a[i]<b[j])
			p+=a[i];
		else
			p+=b[j];
		printf("%f",(float)p/2);
	}
	getch();
}