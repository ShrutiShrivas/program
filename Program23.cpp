#include<stdio.h>
int main()
{
	int arr1[]={5,0};
	int arr2[]={9,9};
	int length;
	
	 length=sizeof(arr1)/sizeof(arr1[0]);
	 length=sizeof(arr2)/sizeof(arr2[0]);
	
	for(int i=0;i<length-1;i++)
	{
		if(arr1[i]==5 || arr1[i]==7)
		
			printf("arr 1");
			
		else if(arr2[i]==5 || arr2[i]==7)
		{
				printf("arr 2");
		}
		else
		{
			printf("0");
		}
	}
}
