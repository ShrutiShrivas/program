#include<stdio.h>
int main()
{
	int age=22;
	int *ptr =&age;
	
//	printf("%p\n",&age);//Hexadecimal format
	printf("%u\n",&age);//unsign 
	printf("%u\n",ptr);
	printf("%u\n",&ptr);
	return 0;
}
