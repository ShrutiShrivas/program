#include<stdio.h>

struct stud
{
	int id;
	char name[20];
	char phone[11];
		
}s1;

void main()
{
	printf("Enter the id");
	scanf("%d",&s1.id);
	
	printf("Enter the name");
	scanf("%s",&s1.name);
	
	printf("Enter the phone no");
	scanf("%s",&s1.phone);
	
	printf("%d",s1.id);
	printf("%s",s1.name);
	printf("%s",s1.phone);
}

