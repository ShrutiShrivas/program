#include<stdio.h>

int sum(int n)
{
	if(n==0)
	{
		return 0;
		
	}
	else
	{
		
		return(n+sum(n-1));
	}
	
}

void main(int n)
{
	printf("The first 10 numbers %d",sum(10));
}
