#include<stdio.h>
int main()
{
	int start ,end,count,i,j;
	printf("enter the staring point");
	scanf("%d",&start);
	
	printf("enter the end point");
	scanf("%d",&end);
	for(i=start;i<end;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count=count+1;
			}
		}
		if(count==2)
		{
			printf("Prime number %d\n",i);
		}
	//	else
	//	{
	//		printf("not prime %d\n",i);
	//	}
	}
	
}
