#include<stdio.h>
int main()
{
	char str[10];
	int i,j,count=0;
	
	printf("Enter the string");
	gets(str);
	
	for(i=0;i<strlen(str);i++)
	{
		for(j=i+1;j<strlen(str);j++)
		{
			count=0;
			if(str[i]==str[j])
			{
			printf("%c",str[i]);
			count++;
			str[j]='0';
			}
				
		}
		if(count>0)
		{
			printf("%c",str[i]);
			
		}	
	
	}
	printf("\n%s,",str);
}
