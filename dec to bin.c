#include<stdio.h>
int main()
{
	int var,num,rem,binary=0,i;
	printf("enter the num");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rem=num%2;
		num=num/2;
		binary=binary+(rem*i);
		i=i*10;		
	}
	printf("\n binary equivalent of  %d",binary);
}
