/*9. Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies. Go to the editor
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.*/
#include<stdio.h>
void main()
{
  int x,y;
  printf("Input the coordinate point of x and y axis\n");
  scanf("%d%d",&x,&y);
  if(x>0 && y>0)
  printf("The Coordinates (%d,%d) lies in the First quadrant\n",x,y);
  else if(x<0 && y>0)
  printf("The Coordinates (%d,%d) lies in the second quadrant\n",x,y);
  else if(x<0 && y<0)
  printf("The Coordinates (%d,%d) lies in the third quadrant\n",x,y);
  else if(x>0 && y<0)
  printf("The Coordinate (%d,%d) lies in the fourth quadrant\n",x,y);
  else if(x==0 && y==0)
  printf("The Coordinates (%d,%d) lies on the origin\n",x,y);
}
