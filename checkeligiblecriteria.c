#include<stdio.h>

int main()
{

	
	int math,chem,phy,total_sub ,math_phy;
	
	printf("enter marks  chem phy math total_sub  math_phy");
	scanf("%d %d %d %d %d",&chem,&phy,&math,&total_sub,&math_phy);

	
	if(math>=65 && phy>=55 && chem>=50 && total_sub >=180 || math_phy>=140 )
	{
		printf("You can eligible");
	}
	else
	
	{
		printf("your can not eligible");
	}
	return 0;
}
