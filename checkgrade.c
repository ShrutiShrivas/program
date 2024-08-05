#include<stdio.h>
int main()
{
	char ch;
	printf("enter grade");
	scanf("%s",&ch);
	
	
	switch(ch)
	{
		case 'E':
			printf("excellent");
			break;
		
		case 'V':
			printf("Very Good");
            break;
			
		case 'G':
			printf("Good");
			break;
			
		case 'A':
			printf("Average");
			break;
		case 'F':
			printf("Fail");
				
			
	}
	
	
	
}
