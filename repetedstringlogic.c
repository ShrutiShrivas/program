#include<stdio.h>
int main()
{
	int asc1[256]={0};
	char s1[100];
	int i;
	
	printf("enter the string");
	gets(s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		asc1[s1[i]]++;
			
	}
	for(i=0;s1[i]!='\0';i++)
	{
		if(asc1[s1[i]]!=0 )
		{
		printf("%c = %d\n",s1[i],asc1[s1[i]]);
		asc1[s1[i]]=0;	
		}
		
		
	}

	
}
