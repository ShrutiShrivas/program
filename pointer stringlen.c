#include<stdio.h>
int main()
{
	char str[100];
	char *ptr1;

	printf("Enter the string ");
	gets(str);
	ptr1=str;
	
	int length = 0;
	while (*ptr1 != '\0') {
    length++;
    ptr1++;
}
		
	
	
	printf("length of string  %d",length);
	
}
