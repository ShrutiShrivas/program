#include<stdio.h>
int main()
{
	int arr[10];
	int *ptr;
	int i;
	
	//arr=ptr;
	for(i=0;i<10;i++)
	{
		printf("Enter the element");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d",*ptr);
	}
	
	
}
