#include<stdio.h>
int main()
{
	int i,j;
	
	for(i='E';i>='A';i--)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
}
