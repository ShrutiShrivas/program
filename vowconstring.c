#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int vow=0;
	int con=0;
	int i=0;
	
	printf("\nEnter the string ");
	gets(str);
	
	while(str[i]!='\0')
	{
		if((str[i]<=65 && str[i]>=90) || (str[i]>=97 && str[i] <=122))
		{
			if(str[i]=='a' || str[i]=='e'|| str[i]=='o'|| str[i]=='i' || str[i]=='u' || str[i]=='A' || str[i]=='I' || str[i]=='E' || str[i]=='O' || str[i]=='U')
			vow++;
			else
			con++;
		}
			i++;
		}
		printf(" \ntotal vowel =%d and total consonant %d",vow,con);
		
	}
	

