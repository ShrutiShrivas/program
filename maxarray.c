#include<stdio.h>
int main()
{
	int arr[20];
	int i,max,min,n;
	
	printf("enter the array size");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the element");
		scanf("%d",&arr[i]);
	}
	
	max=arr[0];
	min=arr[0];
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}

	}	

	printf("The max element %d\n",max);
	printf("The min element %d\n",min);	
}
