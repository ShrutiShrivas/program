#include<stdio.h>
int main()
{
	int arr1[5]={5,6,7,4,5};
	int arr2[5]={1,2,3,8,9};
	int arr3[10];
	int i,j,temp;
	int k =0;

	for(i=0;i<5;i++)
	{
		//scanf("%d",&arr1[i]);
		arr3[k]=arr1[i];
		k++;
	}
	for(j=0;j<5;j++)
	{
	//	scanf("%d",&arr2[i]);
		arr3[k]=arr2[j];
		k++;
	}
	
	
	for(i=0;i<10;i++)
	{
		printf("%d",arr3[i]);
		
	}
}
	
