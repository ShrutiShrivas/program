#include<stdio.h>
int main()
{
	int arr1[]={3,3,5,6,3};
	int arr2[]={5,8,0};
	
	int i;
	int arrsize;
	
	arrsize=sizeof(arr1)/sizeof(arr1[0]);
	
	for(i=0;i<arrsize;i++)
	{
		if(arr1[i]==3 && arr1[i+1]==3)
		{
		
			printf("true array 1");
		}
			
		
		 else if (arr2[i]==5 && arr2[i+1]==5)
		 
		{
			printf("true array 2");
		}
	
	
	}

}
