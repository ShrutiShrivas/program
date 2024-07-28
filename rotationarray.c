#include<stdio.h>
int main()
{
	int a[5],i ,x,j,p,n;
	printf("enter number of array element");
	scanf("%d",&n);
	
	
	printf("enter array element");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("original element");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	
	printf("\n");
	printf("enter num of position rotate\n");
	scanf("%d",&p);
	
	for(j=0;j<=p;j++)
{
	x=a[0];
	for(i=0;i<=n-1;i++)
	a[i]=a[i+1];
	a[i]=x;
}
printf("rotate");
for(i=0;i<n;i++)
printf("%d",a[i]);

return 0;
}




	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	

