#include<stdio.h>
//called function
void sum(int x,int y)
{
	int result;
	result=x+y;
	printf("%d",result);
}
//calling
void main()
{
	int num1,num2;
	printf("enter the number");
	scanf("%d %d",&num1,&num2);
//functon no returntype with argument
	sum(num1,num2);
	
	
}
