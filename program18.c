#include<stdio.h>

int main()
{
	int arr1[]={6,2,3,8,4,0,7};
	
	

	int arrsize;
	
	arrsize=sizeof(arr1)/sizeof(arr1[0]);

	


int mid=arrsize/2-1;
int mid1=arrsize/2;
int mid2=arrsize/2+1;
printf("%d",arr1[mid]);
printf("%d",arr1[mid1]);
printf("%d",arr1[mid2]);

		
}
