#include<stdio.h>
int main()
{
	int num ,r,temp,sum;
	int start,end;
	
	printf("enter the start point");
	scanf("%d",&start);
	
	printf("enter th end point");
	scanf("%d",&end);
	
	for(num=start;num<end;num++)
	{
		temp=num;
		sum=0;
		while(temp!=0)
		{
			r=temp%10;
			temp=temp/10;
			sum=sum+(r*r*r);
			
		}
		if(sum==num)
		printf("%d",num);
	}
		printf("\n");
	
		
	}

