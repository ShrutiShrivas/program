#include<stdio.h>
int main()
{
	int i,x,num[7];
	
	printf("enter array value");
	scanf("%d",&x);
	
	for(i=0;i<7;i++)
	{
		num[i]=x;
		x=3*x;
		
	}
	for(i=0;i<7;i++)
	{
	
	printf("\n num[%d] %d",num[i],i);
}
return 0;
}
