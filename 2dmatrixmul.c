#include<stdio.h>
int main()
{
	int m1[3][3];
	int m2[3][3];
	int m3[3][3];
	int i,j;
	
	printf("enter the 2d matrix\n");
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&m1[i][j]);
		}

	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
	printf("multiplication of 2d array is: \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			m3[i][j]=m1[i][j]*m2[i][j];
			printf("%d ",m3[i][j]);
		}
		printf("\n");
	}
	
}
