#include<stdio.h>
int main()
{
	char str[100];
	char *ptr;
	int countv,countc;
	
	printf("Enter the string ");
	gets(str);
	ptr=str;
	
	countv=0;
	countc=0;
	while(*ptr!='\0')
	{
		if(*ptr=='A' || *ptr=='E' || *ptr=='O' || *ptr=='U' || *ptr=='I' || *ptr=='a' || *ptr=='e' || *ptr=='o' || *ptr=='i' || *ptr=='u' )
			countv++;
		else
			countc++;
		
		ptr++;	
	}
	printf("Total number of vowel %d and consonant  %d\n",countv,countc);
}
