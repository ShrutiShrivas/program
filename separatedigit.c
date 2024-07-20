#include<stdio.h>
int main()
{
	int num ,digit1 ,digit2,digit3,digit4,digit5;
	printf("enter 5digit num");
	scanf("%d",&num);
	
	
		digit1=num%10;
		num=num/10;
		digit2=num%10;
		num=num/10;
		digit3=num%10;
		num=num/10;
		digit4=num%10;
		num=num/10;
		digit5=num%10;
		num=num/10;
		printf("%d %d %d %d %d",digit1,digit2,digit3,digit4,digit5);
	
	return 0;
	
}
