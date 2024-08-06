#include<stdio.h>
int main()
{
	int num ,num1;
	printf("enter the number");
	scanf("%d",&num);
	printf("enter the number1");
	scanf("%d",&num1);
	
	if(num%num1==0)
	{
		printf("perfect number");
	}
	else
	{
			printf(" not perfect number");
	}
}
