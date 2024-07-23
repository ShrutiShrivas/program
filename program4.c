#include <stdio.h>



int test(int nums1[], int nums2[], int arr_size1, int arr_size2);

int main(){
    
    int array1[] = {10, 20, 40, 50};
    int arr_size1 = sizeof(array1)/sizeof(array1[0]);
    int array2[] = {10, 20, 40, 50};
    int arr_size2 = sizeof(array2)/sizeof(array2[0]);
    printf("%d",test(array1,array2,arr_size2,arr_size1));

   
    int array3[] = {10, 20, 40, 50};
    int arr_size3 = sizeof(array3)/sizeof(array3[0]);
    int array4[] = {11, 20, 40, 51};
    int arr_size4 = sizeof(array4)/sizeof(array4[0]);
    printf("\n%d",test(array3,array4,arr_size4,arr_size3));
}       


int test(int nums1[], int nums2[], int arr_size1, int arr_size2)
{
    
    return nums1[0] == nums2[0] || nums1[arr_size1 - 1] == nums2[arr_size2 - 1];
}
