#include<stdio.h>

void oddeven(int x)
{


	if(x%2==0)
	{
		printf("Even number ");
	}
	else
	{
		printf("odd number ");
	}	
	
}
void main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	
	oddeven(num);
}
