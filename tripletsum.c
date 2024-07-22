#include<stdio.h>
int main()
{
	int n1 ,n2 ,result;
	
	printf("enter n1 num");
	scanf("%d",&n1);
		
	printf("enter n2 num");
	scanf("%d",&n2);
	if (n1==n2)
	{
		result=(n1+n2)*3;
		printf("%d",result);
		
	}
	else
	{
		result=(n1+n2);
		printf("%d",result);
	}
	return 0;
	
}
