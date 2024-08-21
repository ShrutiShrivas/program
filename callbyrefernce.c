#include<stdio.h>
long addtwonumbers(long* ,long*);
int main()
{
	long num1,num2,sum;
	printf("Enter first num");
	scanf("%d",&num1);
	printf("Enetr second num");
	scanf("%d",&num2);
	
	sum=addtwonumbers(&num1,&num2);
	printf("%d",sum);
	
}
long addtwonumbers(long*n1,long*n2)
{
	long sum;
	sum=*n1+*n2;
	return sum;
}
