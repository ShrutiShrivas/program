#include<stdio.h>
int main()
{
	int arr[10];
	int n,ctr=0;
	int i,j;
	
	printf("enter the number");
	scanf("%d",&n);
	
	printf("  input  %d number of element \n",n);
	for(i=0;i<n;i++)
	{
		
		printf("%d",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
			
			ctr++;
			break;
			}
		}
		
	}
	printf("the number count %d",ctr);
	return 0;
}
