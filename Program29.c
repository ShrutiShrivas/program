#include<stdio.h>

int main()
{
 int arr[]={2,2,5};
 int arr1[]={3,5};
 int i;
 
 int length;
 
 length=sizeof(arr)/sizeof(arr[0]);
 
 for(i=0;i<length-1;i++)
 {
 	if(arr[i]==3 && arr[i+1]==5 )
 	
 		printf("array 1\n");
 		
 		else if(arr1[i]==3 && arr1[i+1]==5)
 		{
 			printf("array 2\n");
		}
			

 }

}
