#include<stdio.h>


int main()
{
	int x,y,z;
	printf("number x value");
	scanf("%d",&x);
	printf("number y value");
	scanf("%d",&y);
	printf("number z value");
	scanf("%d",&z);
	
	if((x>=100&&x<=200)||(y>=100&&y<=200)||z>=100&&z<=200)
	{
		printf("true");
	}
	else{
			
	printf("false");
	}
	return 0;
	}
