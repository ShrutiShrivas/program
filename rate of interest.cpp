#include<stdio.h>
int main() {
    int p, r, t, int_amt;

    printf("Input principle, Rate of interest & time ");
    scanf("%d%d%d", &p, &r, &t);

   
    int_amt = (p * r * t) / 100;

   
    printf("Simple interest = %d", int_amt);

    return 0;
}
