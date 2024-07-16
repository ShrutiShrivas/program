#include<stdio.h>
int main()
{
int x,i;
printf("enter x value");	
scanf("%d",&x);

for(i=1;i<=x;i++)
 //printf("All the divisors of %d are: ", x);
{
	if(x%i==0)
	{
		printf("\n%d",i);
		printf("\n");
		
	}
	
}
return 0;
}
