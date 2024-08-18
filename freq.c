#include<stdio.h>
int main()
{
	int i,j,key,n,freq=0;
	int arr[10];
	
	printf("enter the  size of array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the elements");
		scanf("%d",&arr[i]);
	}
	
	  printf("enter the number to be serch frequency ");
	  scanf("%d",&key);
		
	 for(i=0;i<n;i++)
	 {
	 	if(arr[i]==key)
	 	freq++;
	 }
	 printf("%d= %d",key,freq);

	
	
}


