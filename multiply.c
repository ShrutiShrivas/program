#include<stdio.h>
int main()
{
	int x, y;
	
	printf("enter x");
	scanf("%d",&x);
	printf("enter y");
	scanf("%d",&y);
	
	if(x%3==0||y%7==0)
	{
	printf("true");	
	}
	else
	{
		printf("false");
	}
	return 0;
}
