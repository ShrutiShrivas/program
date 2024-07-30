#include<stdio.h>
int main()
{

    int arr[] = {9,5, 5,5,9,0}; 
    int i,result;
	    
    int sum =0; 
    int length;  
   
   length = sizeof(arr)/sizeof(arr[0]);    
        
    
    for ( i = 0; i < length-1; i++) 
	{     
     
       if(arr[i]==5 && arr[i+1]==5 && arr[i+2]==5)
       {
       	sum+=arr[i]+arr[i+1]+arr[i+2];
	  
	   }
	     
    }    
 
    printf("Sum of all the elements of an array: %d", sum);    
    return 0;    
}    
