#include<stdio.h>
int main()
{
	int m1[2][2];
	int m2[2][2];
	int m3[2][2];
	int i,j;
	
	printf("enter two by two matrix\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			
			scanf("%d",&m1[i][j]);
		
		}
	}
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
		
			scanf("%d",&m2[i][j]);
		}
	}
	
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
		
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
	printf("Addition of two matrix is:\n");
	
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			m3[i][j]=m2[i][j]+m1[i][j];
			printf("%d ",m3[i][j]);
			
		}
		printf("\n");
	}
	
}
