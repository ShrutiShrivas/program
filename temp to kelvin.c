#include<stdio.h>
int main()
{
	float celsius,kelvin,fahr;
	
	printf("enter temp in celsius ");
	scanf("%f",&celsius);
	
	fahr=1.8*celsius+32.0;
	kelvin=273.15+celsius;
	
	printf("\n%f %f",celsius,fahr);	
	printf("\n%f %f",celsius,kelvin);
}
