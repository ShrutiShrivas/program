#include<stdio.h>

int swap(x,y,temp)
{
	temp=x;
	x=y;
	y=temp;
	
	return(x,y);
	
}
void main()
{
	int a,b,temp;
	printf("Enter the number");
	scanf("%d %d",&a,&b);
	
	int result;
	result=swap(a,b,temp);
	printf("%d",result);
}
