/*3. Write a C program to check whether a given number is positive or negative. 
Test Data : 15
Expected Output :
15 is a positive number
*/
#include<stdio.h>
void main()
{
  int num;
  printf("Enter the number\n");
  scanf("%d",&num);
  if(num>=0)
    printf("%d is positive\n",num);
  else
    printf("%d is negative\n",num);
}
