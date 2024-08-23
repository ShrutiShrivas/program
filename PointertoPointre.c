#include<stdio.h>
int main()
{
	int *p1,**p2,***p3,a=2;
	
	p1=&a;
	p2=&p1;
	p3=&p2;
	
	printf("%d\n",a);
	printf("%d\n",&a);
	printf("%d\n",*&a);
	
	printf("%d\n",p1);
	printf("%d\n",&p1);
	printf("%d\n",*p1);
	
	printf("%d\n",p2);
	printf("%d\n",&p2);
	printf("%d\n",*p2);
	printf("%d\n",**p2);
	
	printf("%d\n",p3);
	printf("%d\n",&p3);
	printf("%d\n",*p3);
	printf("%d\n",**p3);
	printf("%d\n",***p3);
	
	
	
}
