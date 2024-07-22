#include<stdio.h>
int test(int x, int y);

int main(void){
    
    printf("%d",test(124, 678));
    printf("\n"); 

    
    printf("%d",test(82, 652));
    printf("\n"); 

   
    printf("%d",test(7, 87));
    printf("\n"); 

    
    
}
int test(int x, int y)
{
    
    return (x % 10) == (y % 10);
}
