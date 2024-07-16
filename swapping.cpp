#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the x value");
	scanf("%d",&x);
	printf("enter the y value");
	scanf("%d",&y);
	
	printf("\n before swapping %d %d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\n after swapping %d %d",x,y);
	return 0;
	
}
