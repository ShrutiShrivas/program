#include<stdio.h>
int main()

{
	int arr1[] = {1,2};
	int arr2[] = {15,20};
	int arraysize;


	int i;
	
	arraysize=sizeof(arr1)/sizeof(arr1[0]);
	arraysize=sizeof(arr2)/sizeof(arr2[0]);
	

//	printf("%d",arraysize);
	
	for(i=0;i<arraysize-1;i++)
	{
		if(arr1[i]==15 || arr1[i]==20  )	
		
		printf("arr1=1");
		
	else if(arr2[i]==15 || arr2[i]==20)
	
   	{
		printf("arr2=1");	
	}
	
	else
	{
		printf("0");
	}
		
		
	}
	
	
}
