#include<stdio.h>
int main()
{
	int x1,x2,x3,y1,y2,y3,result;
	
	printf("enter points");
	scanf("%d %d %d %d",&x1,&x2,&x3,&y1,&y2,&y3);
	
	result= 0.5*(x1*(y2-y1)+x2*(y3-y1)+x3*(y1-y2));
	if(result==0)
	{
		printf(" Straight line");
	}
	else
	{
		printf(" Not straight line");
	}
	
}
