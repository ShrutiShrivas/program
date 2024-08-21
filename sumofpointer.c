#include<stdio.h>
int main()
{
	int first,*p;
	int second,*q;
	int sum;
	
	printf("Enter the first number");
	scanf("%d",&first);
	
	printf("Enter the second number");
	scanf("%d",&second);
	
	p=&first;
	q=&second;
	
	sum =*p+*q;
	printf("%d",sum);
}
