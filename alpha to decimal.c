#include<stdio.h>
#define N
int main()
{
	char ch;
	printf("\n");
	 for(ch=65;ch<=122;ch=ch+1)
	 {
	 	if(ch>90&&ch<97)
	 	continue;
	 	printf("[%2d-%c]",ch,ch);
	 }
	 return 0;
}
