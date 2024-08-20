#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	
	printf("Enter the string");
	scanf("%s",name);
	
	strupr(name);
	printf("%s",name);
}
