#include<stdio.h>
int main()
{
	int i ,sum=0;
	for(i=0;i<=5;i++)
	{
		printf("%d\t",i*i);
		sum+=i*i;
		
	
	}
	printf("\nthe sum of %d ",sum);	
}
