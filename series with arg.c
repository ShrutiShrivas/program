#include<stdio.h>

void printseries(int sum,int fact,int i,int num)
{
	// num=1;
	// sum=0;
	while(num<=5)
	{
		fact=1;
		for(i=1;i<=num;i++)
		{
			fact=fact*i;
		}
		sum=sum+(fact/num);
		num++;
	}
	printf("%d",sum);
	
}

void main()
{
	int sum=0,fact=1,num=1,i;
	
	printseries(sum,fact,i,num);
}
