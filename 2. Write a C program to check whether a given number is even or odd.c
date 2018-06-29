/*2. Write a C program to check whether a given number is even or odd. Go to the editor
Test Data : 15
Expected Output :
15 is an odd integer*/
#include<stdio.h>
void main()
{
  int num;
  printf("Enter the number\n");
  scanf("%d",&num);
  if(num%2==0)
  printf("%d is even\n",num);
  else
  printf("%d is odd\n",num);
}
