#include <stdio.h>
int main()
{
	
int n=7, i,j;

for (i=0;i<=n;i++)
{
	for(j=0;j<=2*i;j++)
	{
		printf(" ");
	}
	for(j=1;j<=n-2*i;j++)
	{
		printf("%d ",j);
	}
	printf("\n");
}
}
