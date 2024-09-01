#include<stdio.h>

void swap(int x,int y,int temp)
{
	temp=x;
	x=y;
	y=temp;
	printf(" %d %d",x,y);

	
}
void main()
{
	int a,b,temp;
	printf("enter the number");
	scanf("%d %d",&a,&b);
	
	swap(a,b,temp);
	
	
}
