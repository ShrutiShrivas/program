#include<stdio.h>
int main()
{
	char str[6];
	int i,j,l=0;
	
	printf("Enter the string ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		l=l+1;
	}
	printf("%d\n",l);
}
