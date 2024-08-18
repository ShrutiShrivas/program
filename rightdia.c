#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("enter the element 2d matrix\n");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("left diagonal matrix\n");
	for(i=0;i<=2;i++)
	for(j=0;j<=2;j++)
	{
		if(i==j)
		printf("%d\n",a[i][j]);
	}
	
	printf("Right diagonal matrix\n");
	for(i=0;i<=2;i++)
	for(j=0;j<=2;j++)
	{
		if(i+j==2)
		printf("%d\n",a[i][j]);
	}
	
} 
