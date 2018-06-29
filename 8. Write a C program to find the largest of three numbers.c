/*8. Write a C program to find the largest of three numbers.
Test Data : 12 25 52
Expected Output :
1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three*/
#include<stdio.h>
void main()
{
  int num1,num2,num3;
  printf("Input three number \n");
  scanf("%d %d %d",&num1,&num2,&num3);
  if(num2>num1)
    if(num3>num2)
    printf("%d is greater \n",num3);
    else
    printf("%d is greater \n",num2);
  else
  printf("%d is greater \n",num1);

}
