#include<stdio.h>
int main()
{
	int a[2][2];
	int i,j;
	
	printf("enter 2d matrix :\n");
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
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
