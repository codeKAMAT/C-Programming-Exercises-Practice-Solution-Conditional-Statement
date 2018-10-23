/*10. Write a C program to find the eligibility of admission for a professional course based on the following criteria:
Marks in Maths >=65
Marks in Phy >=55
Marks in Chem>=50
Total in all three subject >=180
or
Total in Math and Physics >=140

Test Data :
Input the marks obtained in Physics :65
Input the marks obtained in Chemistry :51
Input the marks obtained in Mathematics :72
Expected Output :
The candidate is eligible for admission*/
#include<stdio.h>
void main()
{

  int Maths,Phy,Chem;
  printf("Input the marks obtained in Physics\n");
  scanf("%d",&Phy);
  printf("Input the marks obtained in Mathematics\n");
  scanf("%d",&Maths);
  printf("Input the marks obtained in Chemistry\n");
  scanf("%d",&Chem);

  if(Maths>=65 && Phy>=55 && Chem>=50 && (Maths+Phy+Chem)>=180)
    printf("The candidate is eligible for admission\n");
    else if(Maths+Phy>=140)
    printf("The candidate is eligible for admission\n");
    else
    printf("The candidate is not eligible for admission\n" );

}
