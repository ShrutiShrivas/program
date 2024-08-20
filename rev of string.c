#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	
	printf("Enter the name");
	scanf("%s",name);
	
	strrev(name);
	printf("%s",name);
}
