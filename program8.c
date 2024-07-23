#include<stdio.h>
int main()
{
	int x;
	
	printf("enter x value");
	scanf("%d",&x);
	if(x%10<=2||x%10>=8)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
