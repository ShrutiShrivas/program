#include<stdio.h>>
int main()
{
	int s ,m,l,diff1,diff2;
	
	printf("\n enter number s, m,l");
	scanf("\n%d %d %d",&s,&m,&l);
	
	diff1=s-m;
	diff2=m-l;
	if(diff1==diff2)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
