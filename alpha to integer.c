#include<stdio.h>
int main()
{
	char* letter="abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	
	for(i=0;i<53;i++)
	{
		printf("%d\t",letter[i]);
		
	}
	return 0;
}
