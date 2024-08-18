#include<stdio.h>
int main()
{
	char a[10];
	char b[10];
	
	printf("enter the first string");
	gets(a);
	printf("enter the second string");
	gets(b);
	
	if(strcmp(a,b)==0)
	{
		printf("Equal string");
	}
	else if(strcmp(a,b)>0)
	{
		printf("first is greater");
		
	}
	else 
	{
		printf("second is greater");
	}
}
