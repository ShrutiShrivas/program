#include<stdio.h>
int main()
{
	int id ,unit,pay;
	char str[10];
	 
	
	printf("enter the id,name,unit");
	scanf("%d %s %d",&id,&str ,&unit);
	
	if(unit>=1 && unit<=199)
	{
		pay=unit*1.20;
	
	}
	else if(unit>=200 && unit<=400)
	{
		pay=unit*1.50;
	}
	else if(unit>=400 && unit<=600)
	{
		pay=unit*1.80;
	}
	else if(unit>=600)
	{
		pay=unit*2.00;
	}
	else if(unit>=400)
	{
		pay=pay*15/100;
	}
	else
	{
		pay ==100;
	}
	
		printf("%d",pay);
	
	
	
}
