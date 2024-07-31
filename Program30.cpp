#include<stdio.h>

int main()
{
	int arr1[]={1,2,3,4,8,0};
	int i;
	int even_count=0;
	int odd_count=0;
	
	

	int arrsize;
	
	arrsize=sizeof(arr1)/sizeof(arr1[0]);
	
	for( i=0;i<arrsize;i++)
	{
		if(arr1[i]%2==0)
		
		even_count++;
		
		else
		
		odd_count++;
		
	}
	printf("%d %d",even_count,odd_count);
}
