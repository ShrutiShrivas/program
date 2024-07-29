#include<stdio.h>
int main()
{
	int a[5],i,temp;
	
	for(i=0;i<5;i++)
	{
		printf("enter array element [%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		
		printf("%d\n",a[i]);
	}
	
	
	
	
	for(i=0;i<5;i++)
	{
		temp=a[0];
		a[0]=a[4];
		a[4]=temp;
	}
		printf(" after swap Array");
		for(i=0;i<5;i++)
	{
	
		printf("%d",a[i]);
	}
	return 0;
}
