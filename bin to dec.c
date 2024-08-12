#include<stdio.h>
int main()
{
	int n,re,d=0,base=1;
	printf("enter the number");
	scanf("%d",&n);
		while(n>0)
	{
		re=n%10;
		d=d+re*base;
		n=n/10;
		base=base*2;
		
	}
	printf("decimal %d",d);
}

