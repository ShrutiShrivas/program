#include<stdio.h>
//#include<string.h>
int main()
{
	char str[100];
	int i;
	
	printf("enter the string");
	 gets(str);
	
	for(i=0;i<7;i++)
	{
		printf("%c\n",str[i]);
	}
}
