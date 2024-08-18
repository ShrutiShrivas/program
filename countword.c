#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i=0,word=1;
	printf("enter the string");
	gets(str);
	
	while(str[i]!='\0')
	{
		if(str[i]==' '|| str[i] =='\n'|| str[i] =='\t' )
		{
				word++;
		}
	
			i++;
	}

	 printf("Total number of words in the string is : %d\n", word - 1);
}
