#include<stdio.h>

int main()
{
	int arr1[]={6,2,3,0,8,4,7};
	int i;
	int even_count=0;
	
	

	int arrsize;
	
	arrsize=sizeof(arr1)/sizeof(arr1[0]);
	
	for( i=0;i<arrsize-1;i++)
	{
		if(arr1[i]%2==0)
		
		
		printf("%d",arr1[i]);
	
	
	}
}
