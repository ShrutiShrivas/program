#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10];
	char s2[10];
	int count=0,i;
	printf("enter the string");
	gets(s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		if ((s1[i]>='A' && s1[i]<='Z') ||(s1[i]>='a' && s1[i]<='z'))
		{
			s2[count]=s1[i];
			count++;
		}
		
	}
		strcpy(s1,s2);
	printf("%s",s1);

	
}
