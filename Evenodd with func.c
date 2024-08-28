#include<stdio.h>

void evenodd()
{
	int num;
	printf("Enetr the number=");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("Even number");
	}
	else
	{
		printf("Odd number");
	}

}
void main()
{
	evenodd();
}
