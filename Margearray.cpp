#include<stdio.h>
int main()
{

int arr_size1, arr_size2;

int nums1[]={1,2,8,6,0};
int nums2[]={9,4,0,4,0};

arr_size1 = sizeof(nums1)/sizeof(nums1[0]);

arr_size2 = sizeof(nums2)/sizeof(nums2[0]);

for(int i=0;i<=arr_size1-1 ;i++){

 
 printf("%d ",nums1[i],nums1[i+1]);
}

for(int i=0;i<=arr_size2-1 ;i++){

 
 printf("%d ",nums2[i],nums2[i+1]);
}

	
	
}
