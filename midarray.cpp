#include<stdio.h>

int main()
{
	int arr1[]={6,2,3,4,7};
	int arr2[]={1,2,4,2,5};
	

	int arrsize,arrsize2;
	
	arrsize=sizeof(arr1)/sizeof(arr1[0]);
//	printf("%d",arrsize);
	
	arrsize2=sizeof(arr2)/sizeof(arr2[0]);
//	printf("\n%d",arrsize);

int mid=arrsize/2;
printf("%d",arr1[mid]);
printf("%d",arr2[mid]);

		
}

