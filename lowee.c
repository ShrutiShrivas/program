#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	
	printf("enter the string");
	scanf("%s",name);
	
	strlwr(name);
	printf("%s",name);
}
