#include<stdio.h>
int main()
{
	int num ,count=1,sum=0;
	
	printf("enter the num");
	scanf("%d",&num);
	
	while(count<=num)
	{
		if(count%2!=0)
		sum=sum+count;
		count++;
	}
	printf("odd num %d",sum);
	
	
}
