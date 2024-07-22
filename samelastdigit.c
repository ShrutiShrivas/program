#include<stdio.h>
#include<stdlib.h>
int digit(int x, int y);

int main(void){
    
    printf("%d",digit(123, 456));
    printf("\n"); 

    
    printf("%d",digit(12, 512));
    printf("\n"); 

    int digit(int x, int y)
{
    
    return abs(x % 10) == abs(y % 10);

}
}

