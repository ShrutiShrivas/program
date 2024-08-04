#include<stdio.h>
int main()
{
  float height;
  printf("Enter your height in centimeter\n");
  scanf("%f",&height);
  if(height<4.5)
    printf("The person is Dwarf\n");
  else if ((height>=4.5) && (height<5))
    printf("The person is average height");
  else if((height>=5) && (height<=6))
    printf("The person is tall\n");
}
