#include<stdio.h>

int main()
{
int a1[5],i ,n;
int temp[5];
int index=0;

	printf("enter number of array element");
	scanf("%d",&n);
	
	
	printf("enter array element");
	for(i=0;i<5;i++)
	scanf("%d",&a1[i]);
	
	printf("original element");
	for(i=0;i<5;i++)
	printf("%d",a1[i]);
	
	for (i = 0; i < 5; i++)
    {
        
        if (a1[i] % 2 == 0)
        {
            int temp = a1[index];
            a1[index] = a1[i];
            a1[i] = temp;

            index++;
        }
        
	}	
	printf("\n");
	printf(" New Array");
	
	for(i=0;i<n;i++)
	printf("%d",a1[i]);
	
}
