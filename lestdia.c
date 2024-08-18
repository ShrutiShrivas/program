#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("enter the elemnt");
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
	
	printf("left diagonal\n");
	for(i=0;i<=2;i++)
	for(j=0;j<=2;j++)
	{
	if(i==j)
	printf("%d",a[i][j]);
	}
}
