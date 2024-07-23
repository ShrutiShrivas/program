#include<stdio.h>
int main()
{
	int a[5] ,i;
	printf("enter array element");
	
	for(i=0;i<=4;i++)
	{
		scanf("%d",a[i]);
	}
	printf("\n reverse element");
	
	for(i=4;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	
}
