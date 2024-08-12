#include<stdio.h>
int main()
{
	float a,d,t,sum=0;
	int i,n;
	
	printf("enter the first term AP");
	scanf("%f",&a);
	
	printf("enter commerence difference");
	scanf("%f",&d);
	
	printf("enter the number of terms");
	scanf("%d",&n);
	
	t=a;
	for(i=0;i<=n;i++)
	{
		sum=sum+t;
		t=t+d;
	}
	printf("\n sum %d term and %f",n,sum);
	
	
	
	
}
