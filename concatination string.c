#include<stdio.h>
int main()
{
	char a[6];
	char b[6];
	char c[6];
	int i,j,k;
	printf("Enter the string ");
	gets(a);
	
	printf("Enter the string 2 ");
	gets(b);
	
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c",a[i]);
	}
		for(i=0;b[i]!='\0';i++)
	{
		printf("%c",b[i]);
	}
	
		for(i=0;c[i]!='\0';i++)
	{
		c[i]+b[i]+a[i];
		printf("%c",c[i]);
	}
	
	
	
}
