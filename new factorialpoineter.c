#include<stdio.h>
int main()
{
	int num,fact=1,*n,*p,i;
	
	printf("enter the number");
	scanf("%d",&num);
	
	p=&num;
	n=&fact;
	
	for(i=1;i<=*p;i++)
	{
		*n=*n*i;
	}
	printf("%d the factorial value %d",*n,*p);
}
