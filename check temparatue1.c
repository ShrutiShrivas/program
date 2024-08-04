#include<stdio.h>
int main()
{
	int temp;
	printf("enter temperature");
	scanf("%d",&temp);
	
	if(temp<0)
	
		printf("freez");
	
	 else if(temp<10 )
	
		printf("very cold weather");
	
	 else if(temp<20 )
	
		printf("cold weather");
	
	 else if(temp<30 )
	
		printf("Normal temprature");
	
		else if (temp<40 )
	
		printf(" Hot day ");
		
		else
		printf(" very hot day");
		
	
	
}


