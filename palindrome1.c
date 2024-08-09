#include<stdio.h>
int main()
{
	int n,ans=0,temp;
	printf("enter n number");
	scanf("%d",&n);
	temp=n;
		while(temp !=0){
		ans=(ans*10)+(temp%10);
		temp=temp / 10;
	}
	if(ans==n)
	{
		printf("palindrome");
		
	}
	else
	{
		printf("not palindrome");
	}
	
	return 0;
}
