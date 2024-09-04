#include<stdio.h>

struct stu
{
	int id;
	char name[10];
	char phoneno[10];
	
}s1;

void main()
{
	struct stu s1={1,"ram","77890"};
	struct stu s2={2,"Shayam","99865"};
	
	printf("%d ",s1.id);
	printf("%s ",s1.name);
	printf("%s ",s1.phoneno);
	
	printf("\n%d",s2.id);
	printf("%s ",s2.name);
	printf("%s ",s2.phoneno);
	
}
