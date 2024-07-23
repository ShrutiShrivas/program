#include<stdio.h>
int main()
{
	int num1,num2;
		
 	
 	printf("num1");
 	scanf("%d",&num1);
 	printf("num2");
 	scanf("%d",&num2);
 	
 	
    if (num1 == num2) 
    {
      printf("0");
    }
    else if ((num1 % 5 == num2 % 5 && num1 < num2) || num1 > num2) 
    {
        printf("%d",num1);
    }
    else
    {
        printf("%d",num2);
    }
}
