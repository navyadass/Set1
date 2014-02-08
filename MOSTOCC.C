/*4. given an array who has values between 0 to 99 only (multiple times each value can occur) find the value that occurred most number of times in the array*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int *a,b[100],i,n,max;
	clrscr();
	printf("Enter the no of elements:");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<100;i++)
		b[i]=0;
	for(i=0;i<n;i++)
		b[a[i]]++;
	max=a[0];
    	for(i=1;i<n;i++)
    	{
       		if(b[a[i]]>max)
	   	{
			max=a[i];
	   	}

    	}
	printf("Element occuted max times:%d",max);
	getch();
}
