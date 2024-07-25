#include<stdio.h>

int test(int nums[]);

int main(){
    
    int arr_size;
    int array1[] = {1,2};

   
    printf("%d", test(array1));

    int array2[] = {14, 15};
    printf("\n%d", test(array2));

}

int test(int nums[])
{
   
    return nums[0] != 12 && nums[0] != 15 && nums[1] != 12 && nums[1] != 15;
}
