#include<stdio.h>
int main()
{
	int num1,num2,rem1,rem2;
		
 	
 	printf("num1");
 	scanf("%d",&num1);
 		
 	
 	printf("num2");
 	scanf("%d",&num2);
 	rem1=num1%5;
 	rem2=num2%5;
 	
 	if(rem1==rem2)
 	{
 		printf("%d",num1>num2,num2);
 		printf("%d",num2>num1,num1);
 		
	 }
	 else
	 {
	 	printf("%d",num1==num2);
	 
	 }
	 return 0;
}
