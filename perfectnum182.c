#include<stdio.h>
int main()
{
	int n,i,sum=0;
	
	printf("enter the number");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
	if(sum==n)
	{
		printf("Perfect number");
	}
	else
	{
		printf("Not perfect");
	}
	
	
}
