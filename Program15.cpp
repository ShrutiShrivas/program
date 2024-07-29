#include<stdio.h>
int main()
{
int arr[]={1,2,3};
int arr2[]={1,4,3};
int i;
int sum=0,sum2=0;

int arr_size=sizeof(arr)/sizeof(arr[0]);
int arr_size2=sizeof(arr2)/sizeof(arr2[0]);

for(i=0;i<arr_size;i++)
{
	sum=sum+arr[i];
	sum2=sum2+arr2[i];
}
//printf("sum %d\n",sum);
//printf("sum %d",sum2);

if(sum>sum2)
{
	printf("sum %d\n",sum);
}
else
{
		printf("sum %d\n",sum2);
}

}
