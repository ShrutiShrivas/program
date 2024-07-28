#include<stdio.h>
int main()
{
	int a[5],i,sum ;
	printf("enter array element");
	
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n sum of element");
	
	for(i=0;i<=4;i++)
	{
		sum+=a[i];
	
	}
		printf("\n%d",sum);
	return 0;
	
}
