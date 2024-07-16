#include<stdio.h>
int main()
{
	int a,b;
	
	printf("enter integer  ");
	
	scanf("%d",&a);
	printf("\n integer value %d" ,a);
	
	a <<=2;
	b=a;
	 printf("left shift %d ",b);
	return 0;
	
}

