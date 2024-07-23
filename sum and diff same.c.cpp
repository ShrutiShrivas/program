#include<stdio.h>
int main()

{
	int x,y;
	printf("x");
 	scanf("%d",&x);
 	
 	printf("y");
 	scanf("%d",&y);
 	
 	if((x==5)||(y==5)||(x+y==5)||(x-y==5))
 		{
 		printf("%d",x+y );
 		printf("%d",x-y);
		printf(" true");
	}
	else
	{
		printf("false");
	}
	return 0;
	
	
}
