#include<stdio.h>

int printhellw(int count)
{
//	if(count==0)
//	{
		
//		return 0;
//	}
	printf("Hello world\n");
	printhellw(count-1);
	
}

void main(int count)
{
		printhellw(5);
}
