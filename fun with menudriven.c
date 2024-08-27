#include<stdio.h>

void sum()
{
	int a=20,b=10;	

	printf("Addtion %d\n",a+b);
}
void sub()
{
	int a=20,b=10;	

	printf("Subtration %d\n",a-b);
}
void mul()
{
	int a=20,b=10;	

	printf("Multiplication %d\n",a*b);
}
void div()
{
	int a=20,b=10;	

	printf("Division of %d\n",a/b);
}

void main()
{
	int choice;
	printf("enter the choice\n");
	printf("enter 1  for addtion\n");
	printf("enter 2  for subtration\n");
	printf("enter 3 for multiplication\n");
	printf("enter 4 for division\n");
	
	scanf("%d",&choice);
	if(choice==1)
	{
		sum();
	}
	else if(choice==2)
	{
		sub();
	}
	else if(choice==3)
	{
		mul();
	}
	else if(choice==4)
	{
		div();
	}
	else
	{
		printf("Invalid number");
	}
}

