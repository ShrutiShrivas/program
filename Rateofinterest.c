#include<stdio.h>
int main()
{
	float principal_amt, days,interest,rate_ofinterest;
	const int year=365;
	
	printf("enter amount");
	scanf("%f",&principal_amt);
	
	
	

	
	while(principal_amt!=0)
	{
	

     printf( "Input interest rate: " );
    scanf( "%f", &rate_ofinterest );
        
       
    printf( "Input  days: " );
    scanf( "%f", &days );
       	interest=(principal_amt*rate_ofinterest*days)/year;
		
		printf( "The interest amount is %.2f\n", interest );
	}
	return 0;
}
