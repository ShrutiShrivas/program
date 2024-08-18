#include<stdio.h>
int main()
{
	
	int i,pos;
	int a[5];
	

	printf("enter the elements");
	
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);	
	}
	printf("enter the delete positin in array");
	scanf("%d",&pos);
	for(i=pos-1;i<4;i++)
	{
		a[i]=a[i+1];
		
	}

	for(i=0;i<4;i++)
	{
		printf("%d",a[i]);
	}
}
