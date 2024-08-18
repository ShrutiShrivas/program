#include<stdio.h>
int main()
{
	
	int n,i,pos,item;
	int a[5];
	
	printf("enter size of array");
	scanf("%d",&n);
	
	printf("enter the elements");
	
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	printf("Enter position that you insert");
	scanf("%d",&pos);
	
	printf("Enter item that you want to insert");
	scanf("%d",&item);
	
	for(i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=item;
	n++;
	
	printf("New array");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
