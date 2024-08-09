#include<iostream>
using namespace std;
 int main()
 {
 	int n1=0,n2=1,n3,i,num;
 	
 	printf("enter the number");
 	scanf("%d",&num);
 	
 	for(i=2;i<num;i++)
 	{
 		n3=n1+n2;
 		printf(" the fibonacci series %d\n",n3);
 		n1=n2;
		n2=n3;
	 }
	 
 	
 	
 }
