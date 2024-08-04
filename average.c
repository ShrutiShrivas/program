#include<stdio.h>
int main()
{
	int n1,n2,n3,n4;
	float avg;
	
	printf("enter value of n1 n2 n3 n4");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	avg=(n1+n2+n3+n4)/4;
	
	printf("%f",avg);
}
