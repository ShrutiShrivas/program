#include<stdio.h>
int main()
{
	int n,i;
	int sum=0;
	int  t=1;
	
	printf("input the numbers");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		printf("%d",t);		
	if(i<n)
	{
		printf("+");
		
	}
	sum=sum+t;
	t=(t*10)+1;
}
printf("the sum %d",sum);
	
	
}
