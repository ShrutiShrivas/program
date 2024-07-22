#include <stdio.h>  


int test(int temp1, int temp2); 

int main(void)
{
	printf("%d", test(-1, 120));

    
    printf("\n");

    
    printf("%d", test(2, 120));
}
int test(int temp1, int temp2)
{
    
    return temp1 < 0 && temp2 > 100 ;
}

