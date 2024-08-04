#include<stdio.h>

int main()
{
    int sidea, sideb, sidec; 
    
    printf("Input sides of triangle: "); 
    scanf("%d %d %d", &sidea, &sideb, &sidec);  
    
    if ((sidea + sideb > sidec) && (sidea + sidec > sideb) && (sideb + sidec > sidea)) 
	{
        
        if(sidea==sideb && sideb==sidec) 
        {
            printf("This is an equilateral triangle.\n");  
        }
        else if(sidea==sideb || sidea==sidec || sideb==sidec) 
        {
            printf("This is an isosceles triangle.\n");  
        }
        else 
        {
            printf("This is a scalene triangle.\n"); 
        }
  
    
	} 
	
}
