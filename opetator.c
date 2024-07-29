#include<stdio.h>

int main()
{
	int a,b ,sum,sub,mul,div;
	
	printf("enter the number");
	scanf("%d %d",&a,&b);
	
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	
	printf("%d %d %d %d",sum,sub,mul,div);
}
