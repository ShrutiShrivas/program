#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	char n2[80];
	
	printf("Enter the string");
	scanf("%s",name);
	
	strcpy(n2,name);
	printf("%s",n2);
}
