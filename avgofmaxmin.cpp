#include <stdio.h>
int main() {
    int a, ctr = 0, min_num, max_num, s = 0;
    double avg;

    
    printf("Input a positive integer:\n");

    scanf("%d", &a);


    if (a <= 0) {
        printf("No positive number entered\n");
        return 0;
    }

    min_num = a;
    max_num = a;

    // Loop to process subsequent inputs
    while (a > 0) {
        s += a;
        ctr++;
      if(a>max_num)
		max_num=a;
		if(a<min_num)
		min_num =a;
	//	scanf("%d",&n);
				
        // Prompt for the next positive integer
        printf("Input next positive integer:\n");
        scanf("%d", &a);
    }

    avg = s / (double) ctr;


    printf("Number of positive values entered is %d\n", ctr);
    printf("Maximum value entered is %d\n", max_num);
    
    
    printf("Minimum value entered is %d\n", min_num);
    printf("Average value is %0.4lf\n", avg);

    return 0;
}
