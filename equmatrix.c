#include<stdio.h>
int main()
{
	int a[2][2];
	int b[2][2];
	int flag=0;
	int i,j,k;
	
	printf("enter two by two matrix\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			
			scanf("%d",&a[i][j]);
		
		}
	}
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
		
			scanf("%d",&b[i][j]);
		}
	}
	
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
		
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<=1;i++)
		for(j=0;j<=1;j++)
		{
		
			if (a[i][j]!=b[i][j])
			flag =1;
		}
			 if(flag==0)
			printf("\nThe matrix are equal");
			else
			printf("\nThe matrix is not equal");
	
		return 0;
	
	}
