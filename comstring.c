#include<stdio.h>
int main()
{
	char a[10];
	char b[10];
	int i,isequal=1;
	
	printf("enter the first string");
	gets(a);
	printf("enter the second string");
	gets(b);
	
	for(i=0;a[i]!='\0'|| b[i]!='\0';i++)
	{
		if(a[i]!=b[i])
		{
			isequal=0;
			break;
		}
	
	}
	
	if(isequal==1)
	{
		printf("It is equal");
	}
	else
	{
		printf("It is not equal");
	}

	
}
