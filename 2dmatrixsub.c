#include<stdio.h>
int main()
{
	int i,j;
	int s1[2][2];
	int s2[2][2];
	int s3[2][2];
	printf("enter the 2d matrix");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d ",&s1[i][j]);
		}
	}
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d ",s1[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d ",&s2[i][j]);
		}
	
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d ",s2[i][j]);
		}
		printf("\n");
	}
	printf("Subtraction of two matrix :\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			s3[i][j]=s2[i][j]-s1[i][j];
			printf("%d",s3[i][j]);
		}
		printf("\n");
	}
	
	
}
