#include<stdio.h>
int main()
{
int i,n;
int a[10];

printf("enter the array size");
scanf("%d",&n);

printf("enter the element");
for(i=0;i<n;i++)

{

	scanf("%d",&a[i]);
}

printf("Even numbers\n");
for(i=0;i<n;i++)
{
	if(a[i]>=0)
	{
		if(a[i]%2==0)
		printf("%d\n",a[i]);
	}
}
printf("odd numbers\n");
for(i=0;i<n;i++)
{
	if(a[i]>=0)
	{
		if(a[i]%2==1)
		printf("%d\n",a[i]);
	}
}


}

	
  

