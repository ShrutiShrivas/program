#include<stdio.h>
int main()
{
	int m=100;
	float n=100.9;
	char ch='z';
	
	int *pt1;
	float *pt2;
	char *pt3;
	
	pt1=&m;
	pt2=&n;
	pt3=&ch;
	
	printf("Interger value %d\n",m);
	printf("Float value %f\n",n);
	printf("char value %c\n",ch);
	
	printf("address of m %p\n",&m);
	printf("address of n %p\n",&n);
	printf("address of ch %p\n",&ch);
	
	printf("Value of address m %d\n",*(&m));
	printf("Value of address n %f\n",*(&n));
	printf("Value of address c %c\n",*(&ch));
	
	printf("Address of m %p\n",pt1);
	printf("Address of n %p\n",pt2);
	printf("Adress of ch %p\n",pt3);
	
	printf("Value at address of m %d\n",*pt1);
	printf("Value at address of n %f\n",*pt2);
	printf("Value at address of ch %c\n",*pt3);
	
	
}
