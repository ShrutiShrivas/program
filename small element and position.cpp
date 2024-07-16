#include<stdio.h>

int main()
{
	int i,smval,pos,a[5];
	
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	
	smval=a[0];
	pos=1;
	
	for(i=0;i<5;i++)
	{
		if(smval>a[i])
		{
			smval=a[i];
			pos=i+1;
		}
	}
	printf("%d %d",smval,pos);
	return 0;
}
