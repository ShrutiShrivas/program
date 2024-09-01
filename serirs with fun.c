#include<stdio.h>

void fact()
{
	int sum=0,fact=1,i,num=1;
	
	
	 
	 while(num<=5)
	 {
	 	fact=1;
	 	for(i=1;i<=num;i++)
	 	{
	 		fact=fact*i;
	 		
		}
	 sum=sum+(fact/num);
	 num++;
	 }
	 printf("%d",sum);
	 
}
void main()
{
	fact();
}
