#include<stdio.h>
int main()
{
	char i,j;
	for(i=65 ;i<=69;i++)
	{
		for(j=65 ;j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
