#include<stdio.h>

int sum(int x,int y)
{
	int res;
	res=x+y;
	return(res);
}

void  main()
{
	int num1,num2;
	
	printf("Enter the number");
	scanf("%d %d",&num1,&num2);
	
	int res;
	res = sum(num1,num2);
	printf("%d",res);
	
}
