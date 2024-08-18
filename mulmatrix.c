#include<stdio.h>
int main()
{
	int a[2][2];
	int b[2][2];
	int c[2][2];
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
	{
		for(j=0;j<=1;j++)
		{
			c[i][j]=0;
			for(k=0;k<=1;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d ",c[i][j]);
		}
	}
	
}                                                                                                                                
