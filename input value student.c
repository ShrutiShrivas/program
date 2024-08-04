#include<stdio.h>
int main()
{
	int phy ,chem ,math,rollno,total;
	float percentage;
	char name[10];
	
	printf("enter marks phy chem math ");
	scanf("%d %d %d",&phy,&chem,&math);
	
	printf("enter roll number ");
	scanf("%d",&rollno);
	
	printf("enter name");
	scanf("%s",&name);
	
	total=phy+chem+math;
	percentage=(total/3.0)*100;
	
	if(percentage>65)
    printf("first class\n");
    
  else if (percentage<65)
    printf("second class");
    
  else if(percentage>40)  
    printf("Pass\n");
    
     else if(percentage<40)
    printf("fail\n");
    
    printf("rollno %d",rollno);
    printf("name %s",name);
    printf("total %d",total);
    printf("pertage %f",percentage);
	
}
