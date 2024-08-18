#include<stdio.h>
int main()
{
	char str[100];
	
	printf("enter the string");
	gets(str);
	
	printf("Reverse string %s",strrev(str));
	return 0;
}
