#include<stdio.h>
int main()
{
	int x,y,z;
	printf("number x value");
	scanf("%d",&x);
	
	printf("number y value");
	scanf("%d",&y);
	
	printf("number z value");
	scanf("%d",&z);
	
	if(x==y+z||y==x+z||z==x+y)
	{
		printf("true");
		
	}
	else
	{
		printf("false");
	}
	return 0;
}
