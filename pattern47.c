#include<stdio.h>

int main()
{
	int n=4,px=1,py=n*2-1;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<n*2;j++)
		{
			if(j>=px && j<=py)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		px++;
		py--;
		printf("\n");
		
	}
}
