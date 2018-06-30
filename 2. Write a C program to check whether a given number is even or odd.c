/*2. Write a C program to check whether a given number is even or odd. 
Test Data : 15
Expected Output :
15 is an odd integer*/
#include<stdio.h>
void main()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  if(n%2==0)
  printf("%d is even\n",n);
  else
  printf("%d is odd\n",n);
}
