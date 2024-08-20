#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	char name1[100];
	
	printf("enter the string");
	scanf("%s",name);
	
	printf("Enetr sec string");
	scanf("%s",name1);
	
	strcat(name1,name);
	printf("%s",name1);
}
