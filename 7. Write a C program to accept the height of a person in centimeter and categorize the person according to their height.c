/*7. Write a C program to accept the height of a person in centimeter and categorize the person according to their height.
Test Data : 135
Expected Output :
The person is Dwarf.*/
#include<stdio.h>
void main()
{
  int height;
  printf("Enter your height in centimeter\n");
  scanf("%d",&height);
  if(height<150)
    printf("The person is Dwarf\n");
  else if ((height>=150) && (height<165))
    printf("The person is average height");
  else if((height>=165) && (height<=200))
    printf("The person is tall\n");
}
