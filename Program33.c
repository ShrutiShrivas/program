#include <stdio.h> 
int main() 
{ 
    int arr[] = { 5, 6, 0, 4, 6, 0, 9, 0, 8 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int j = 0; 
    int i;
    for ( i = 0; i < n; i++)
	 { 
        if (arr[i] == 0) 
		{ 
            int temp = arr[i]; 
            arr[i] = arr[j]; 
            arr[j] = temp; 
            j++; 
        } 
    } 
    for (i = 0; i < n; i++)
	{ 
        printf("%d ", arr[i]);
        
    } 
  
    return 0; 
}
