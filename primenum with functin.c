#include<stdio.h>

void prime()
{
	int n,i,count=0;
	
	printf("Enter the number");
	scanf("%d",&n);
	
		for(i=1;i<=n;i++)
		{
				if(n%i==0)
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
			printf("Not prime number");
		}
}
void main()
{
	prime();
}
