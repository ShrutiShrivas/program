#include<stdio.h>

int areaofrec()
{
	int res,l,b;
	
	printf("Enter the value of area of rec");
	scanf("%d %d",&l,&b);
	res=l*b;
	return(res);
}
void main()
{
	int res;
	
	res= areaofrec();
	printf("%d",res);
}
