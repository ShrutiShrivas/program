#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int i,j,len,temp;
	
	printf("Enter the string");
	gets(str);
	
	len=strlen(str);
	
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1;j++)
		{
			if(str[i]>str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	printf("sorted %s ",str);
}
