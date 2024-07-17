#include<stdio.h>
int main()
{
	int num[5],i,x;
	printf("enter array ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x);
		if(x>0)
		{
			num[i]=x;
		}
		else
		{
			num[i]=100;
		}
	
	}
	for(i=0;i<5;i++)	
	{
		printf("n[%d] = %d\n", i, num[i]);

	
	}
	return 0;
}
