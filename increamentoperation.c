#include<stdio.h>

int main()
{
	int x=1,i;
	for(i=1;i<=5;i++)
	{
		printf("%d %d %d %d\n",x,x+2,x+4,x+6);
		
		x=x+3;
	}
	printf("\n");
	
}
