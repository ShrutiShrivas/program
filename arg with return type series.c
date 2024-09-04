#include<stdio.h>

int printseries(int num,int i,int fact)
{
	int result;
	
	while(num<=5)
	{
		fact=1;
		for(i=1;i<=num;i++)
		{
			fact=fact*i;
			
		}
		result=result+(fact/num);
		num++;
		
	}
	return(result);
}
void main()
{
	int num=1,i,fact=1;
	
	int result=0;
	result=printseries(num,i,fact);
	printf("%d",result);
}
