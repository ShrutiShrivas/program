#include<stdio.h>

void square(int x)
{
	int result;
	result=x*x;
	printf("Square of %d",result);
	
}
void main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	
	square(num);
}

