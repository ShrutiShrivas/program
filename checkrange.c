#include <stdio.h>  

int test(int x, int y);

int main(void)
{
   
    printf("%d", test(88, 75));

   
    printf("\n");

    
    printf("%d", test(40, 50));
    }


int test(int x, int y)
{

    return (x >= 40 && x <= 50 && y >= 40 && y <= 50) || (x >= 50 && x <= 60 && y >= 50 && y <= 60);
}


