#include<stdio.h>
int main()
{
	int fno,sno;
//	int *ptr1,*ptr2;
	
	int *ptr1=&fno;
	int *ptr2=&sno;
	
	printf("enter the first number");
	scanf("%d",ptr1);
	
	printf("Enter the second number");
	scanf("%d",ptr2);
	
	if(*ptr1>*ptr2)
	{
		printf("The first number is greater %d",*ptr1);
	}
	else
	{
		printf("The second numer is greater %d",*ptr2);
	}
}
