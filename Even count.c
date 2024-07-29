#include<stdio.h>
int main()
{
	int a[5],i,temp,even_num=0;
	
	for(i=0;i<5;i++)
	{
		printf("enter array element [%d]",i);
		scanf("%d",&a[i]);
	}
	
	for( i=0;i<5;i++)
	{
		if(a[i]%2==0)
		
			even_num++;
		
	
	}
		printf("%d",even_num);
}
