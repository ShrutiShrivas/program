#include<stdio.h>
int main()
{

    int arr[] = {1, 2, 3, 17, 5};     
    int sum = 0;    
        
   
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    
    for (int i = 0; i < length; i++) {     
    
    if(arr[i]!=17)
       sum = sum + arr[i];    
    }    
 
    printf("Sum of all the elements of an array: %d", sum);    
    return 0;    
}    
	
