#include<stdio.h>
int main()
{
	int po1,po2;
	
		printf("enter point1");
		scanf("%d",&po1);
		printf("enter point2");
		scanf("%d",&po2);
		
	if(po1>0 &&po1>0)
    printf("first quadrant\n");
    
  else if ((po1<0) && (po2>0))
    printf("secong quadrant");
    
  else if((po1>0) && (po2<0))
    printf("third quadrant\n");
    
     else if((po1<0) && (po2<0))
    printf("fourth quadrant\n");
    
}
