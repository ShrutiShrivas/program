#include<stdio.h>
int main()
{
	int arr1[]={9,5,6,5};
	int arr2[] = {5,5};
	int arrsize;
	
	arrsize=sizeof(arr1)/sizeof(arr1[0]);
	
	arrsize=sizeof(arr2)/sizeof(arr2[0]);
	
	for(int i=0;i<arrsize-1;i++)
	{
		if(arr1[i+1]==arr1[i] && arr1[i]==5)
		
			printf("arr1=1");
		
		else if(arr2[i+1]==arr2[i] && arr2[i]==5)
	
   		{
		printf("arr2=1");	
		}
		else
		{
		printf("0");
		}
	
			
	}
	
	
}
