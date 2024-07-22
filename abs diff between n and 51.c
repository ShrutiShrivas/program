#include<stdio.h>
int main()
{
	int n,result;
	const x=51;
	
	printf("enter n value");
	scanf("%d",&n);
	
	if(n>x)
	{
	 result=(n-x)*3;
	 printf("%d",result);
	}
	else
	{
		result=(x-n);
		printf("%d",result);
	}
}
