#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,0,0};
	int temp[5];
	int index;
	int i;
	
	for(i=0;i<5;i++)
	{
		temp[i]=arr[i];
		printf("%d",arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		if(temp[i]==0 )
		{
		arr[index]=temp[i];
		index++;
		}
	
	}
		
		for(i=0;i<5;i++)
	{
		if(temp[i]!=0 )
		{
		arr[index]=temp[i];
		index;
		}
	
	}	
		

	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
	
}
