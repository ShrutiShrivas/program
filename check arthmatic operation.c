#include<stdio.h>
int main()
{
	int opration,a,b;
	printf("enter a and b value");
	scanf("%d %d",&a,&b);
	
	printf("input option");
	scanf("%d",&opration);
	switch(opration)
	{
		case 1:
			printf("The addtion of %d %d = %d",a,b,a+b);
			break;
		case 2:
			printf("The subtration of %d =%d %d",a,b,a-b);
			break;
		case 3:
			printf("The multication of %d = %d %d",a,b,a*b);
		case 4:
			printf("The division of %d= %d %d" ,a,b,a/b);
	}
}
