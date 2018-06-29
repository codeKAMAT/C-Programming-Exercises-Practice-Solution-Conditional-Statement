/*1. Write a C program to accept two integers and check whether they are equal or not. Go to the editor
Test Data : 15 15
Expected Output :
Number1 and Number2 are equal*/
#include<stdio.h>
void main()
{
  int Number1,Number2;
 printf("Enter the Number1");
 scanf("%d",&Number1);
 printf("Enter the Number2");
 scanf("%d",&Number2);
 if(Number1==Number2)
  {
    printf("%d and %d are equal",Number1,Number2 );
  }
  else
  {
    printf("numbers are not equal");
  }
}
