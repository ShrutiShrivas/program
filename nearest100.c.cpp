#include <stdio.h>  
#include<stdlib.h>
int test(int x, int y);

int main(void)
{
    
    printf("%d", test(68, 95));

    
    printf("\n");

    
    printf("%d", test(100, 100));

    
    printf("\n");

    
    printf("%d", test(99, 80));
}


int test(int x, int y)
{
    int n = 100;     
    int val = abs(x - n);  
    int val2 = abs(y - n); 

   
    return val == val2 ? 0 : (val < val2 ? x : y);
}

