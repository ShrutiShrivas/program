#include<stdio.h>

int square(int x)
{
	int result;
	result=x*x;
	return(result);
}
void main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	
	int result;
	result = square(num);
	printf("%d",result);
}
