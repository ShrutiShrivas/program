#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char str1[100];
	int i=0;
	
	printf("Enter the string");
	gets(str);
	
	
	while(str[i]!='\0'){
		str1[i]=str[i];
		i++;
	}
	str1[i]='\0';
	printf("%s",str1);

}
