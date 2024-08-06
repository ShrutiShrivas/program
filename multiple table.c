#include<stdio.h>
int main()
{
	int i,j,n;
	
	printf("enter the n value");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
	for(j=1;j<=n;j++)
	{
		printf("%d X %d = %d ",j,i,i*j );
	}
	printf("\n");
	}
}
