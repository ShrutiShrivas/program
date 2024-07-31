#include<stdio.h>

int main()
{
int a[5],i ,n1,n2;

for(i=0;i<5;i++)
scanf("%d",&a[i]);

printf("enter number you want to replace");
scanf("%d",&n1);

printf("enter replace which number");
scanf("%d",&n2);

for(i=0;i<5;i++)
{
	if(a[i]==n1)
		a[i]=n2;
}
printf("update array");

for(i=0;i<5;i++)
printf("%d",a[i]);

}

