#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char b[100];
	
	printf("enter the string");
	gets(a);
	
//	strcpy(b,a);
	strrev(b);
	if (strcmpi(a,b)==0)
	{
			printf("Palindrome");
	}
	else 
	{
			printf("Not Palindrome");
	}

	
	
	
}
