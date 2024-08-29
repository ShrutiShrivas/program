#include<stdio.h>

void prime(int x)
{
	int i,count=0;
	
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("Prime number");
	}
	else
	{
		printf("Not Prime number");
	}
		
}

void main()
{
	int num;
	printf("enter the number=");
	scanf("%d",&num);
	
	prime(num);
}
