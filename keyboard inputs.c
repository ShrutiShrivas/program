#include<stdio.h>
int main()
{
	char ch;
	
	
	printf("enter char ");
	scanf("%c",&ch);
	


	if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z'))
	{
	
	printf(" Alphabets ");
	}
	else if(ch>='0' && ch<='9')
	{
		printf(" numbers\n ");
	}
	else
	{
		printf("Special symbol");
	}
	

	
	
}
