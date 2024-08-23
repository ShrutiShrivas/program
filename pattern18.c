#include<stdio.h>
int main()
{
	int i,j ,row=5,col=1;
	
	for(i=row;i>=1;i--)
	{
		for(j=col;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}


