#include<stdio.h>
int main()
{
	int numbers[]={1,2,3,5,3,6,3};
	int numbers1[]={3,7,5,5,3,6,3};
	
	
	int i;
	int arrsize;
	
	arrsize=sizeof(numbers)/sizeof(numbers[0]);
	arrsize=sizeof(numbers1)/sizeof(numbers1[0]);
	
	for(i=0;i<arrsize-3;i++)
	{
		 if (numbers[i] == numbers[i + 1] - 1 && numbers[i] == numbers[i + 2] - 2)
		 {
		 
		 		printf(" array 1");
		}
		else if(numbers1[i] == numbers1[i + 1] - 1 && numbers1[i] == numbers1[i + 2] - 2)
		{
			printf(" array 2 ");
		}
		  
	}
	
}
	
	
