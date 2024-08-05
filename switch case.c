#include<stdio.h>
int main()
{
	int month;
	printf("enter the month ");
	scanf("%d",&month);
	
	switch(month)
	{
	
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("This is 31 days month");
		break;
		
		case 2:
			printf("This is a leap month or 28days month");
			break;
		
		case 4:
		case 6:
		case 9:
		case 11:
			printf("this is 30 days month");
			
	}
}
