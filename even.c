#include<stdio.h>
int main()
{
	int sum=0,count=1,num;
	
	printf("enter number");
	scanf("%d",&num);
	
	while(count<=num)
	{
		if(count%2==0)
		sum=sum+count;
		count++;
	}
	printf("even num %d",sum);
}
