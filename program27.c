#include<stdio.h>

int main()
{
int a[5],i ,n;
	printf("enter number of array element");
	scanf("%d",&n);
	
	
	printf("enter array element");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("original element");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	
	for(i=0;i<n;i++)
	{
		a[0]=a[i];
		a[0]==5;
		
	}
	printf("\n");
	printf(" New Array");
	
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}


