#include<stdio.h>
int main()
{
	char str[10];
	int alph,digit,spl,i=0;
	int alpha=digit=spl=0;
	
	printf("Input string");
	gets(str);
	
	while(str[i]!='\0')
	{
		if((str[i]>='a' && str[i]<='z') ||(str[i]>='A' && str[i]<='Z'))
		{
			alpha++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			digit++;
		}
		else
		{
			spl++;
		}
		i++;
	}
	printf("\nalpha %d",alpha);
	printf("\ndigits %d",digit);
	printf("\nspcial symbol %d",spl);
}
