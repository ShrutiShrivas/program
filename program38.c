#include<stdio.h>
int main()
{
	int x,y,z;
	float result,result1;
	
	printf("enter x,y,z value");
	scanf("%d %d %d",&x,&y,&z);
	
	result=(x+y)*z;
	result1=(x*y)+(y*z);
	
	printf("\n%f result ",result);
	printf("\n%f result1 ",result1);
	return 0;
	
	
}
