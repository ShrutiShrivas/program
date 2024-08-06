#include<stdio.h>
int main()
{
	int num,sum=0,i;
	float avg;
	
	for(i=1;i<=10;i++)
	{
		printf("number %d",i);
		scanf("%d",&num);
		sum+=num;
	//	printf("%d",sum);
		
	}
	avg=sum/10;
	printf("The avg of sum %d %d",avg,sum);
	
}
