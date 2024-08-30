#include<stdio.h>
int main()
{
	int i,j,n=7;
	for(i=0;i<4;i++)
	{
		for(j=0;j<2*i;j++)
		{
			printf(" ");
		}
		
		for(j=0;j<n-2*i;j++)
		{
		printf("%d ",n-2*i);
		}
	printf("\n");

	}
}
