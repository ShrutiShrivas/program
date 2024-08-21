#include<stdio.h>
int main()
{
char s[100];
	int i;
	printf("Enter the string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'  && s[i]<='Z')
		printf("%c",s[i]+32);
	}
}
