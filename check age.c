#include<stdio.h>
int main()
{
	int age;
	
	printf("enter the age");
	scanf("%d",&age);
//	printf("%d",age);
	
	if(age>20)
	{
		printf("You look older than 20");
	}
	else
	
	{
		printf("your age is equal to 20 and less than 20");
	}
	return 0;
}
