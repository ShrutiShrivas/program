#include<stdio.h>

int main()
{
	int arr1[]={6,2,3,4,7};
	int arr2[]={1,2,4,2,5};
	

	int arrsize,arrsize2;
	
	arrsize=sizeof(arr1)/sizeof(arr1[0]);
	printf("%d",arrsize);
	
	arrsize2=sizeof(arr2)/sizeof(arr2[0]);
	printf("\n%d",arrsize);
	
	
	if(arr1[0]==arr2[0] || arr1[arrsize-1]==arr2[arrsize2-1])
	{
		printf("\ntrue");
	}
	else
	{
		printf("\nfalse");
	}
		
}

