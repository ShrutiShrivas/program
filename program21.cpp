#include<stdio.h>
int main()
{

    int arr[] = {1, 5,6,9,10,17};     
    int sum = 0;    
        
   
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    
    for (int i = 0; i < length; i++) {     
    
    if(arr[i]!=5 && arr[i]!=6)
       sum = sum + arr[i]; 
	       
    }    
 
    printf("Sum of all the elements of an array: %d", sum);    
    return 0;    
}    
	
