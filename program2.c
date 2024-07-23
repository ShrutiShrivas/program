#include<stdio.h>
int main()
{
	int x,y,z;
	
	printf("enter x value");
	scanf("%d",&x);
	
	printf("enter y value");
	scanf("%d",&y);
	
	printf("enter z value");
	scanf("%d",&z);
	
	if(y>x&&z>y)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
