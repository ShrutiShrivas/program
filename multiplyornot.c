#include<stdio.h>
int main()
{
	int n1,n2;
	
	printf("enter n1");
	scanf("%d",&n1);
	printf("enter  n2");
	scanf("%d",&n2);
	
	if(n1%n2==0)
	{
		printf("multiply");
		
	}
	else{
		printf("not multiply");
	}
	return 0;
}
