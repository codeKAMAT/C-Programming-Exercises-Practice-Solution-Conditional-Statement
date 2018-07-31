#include<stdio.h>
int main()
{
  int num;
  printf("Input the month in number\n");
  scanf("%d",&num );
  switch (num) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      printf("Month have 31 days\n");
      break;
    case 2:
      printf("Month have 28/29 days\n");
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      printf("Month have 30 days\n");
      break;
    default:
      printf("Error..!!Input valid month number\n");
      break;
  }
}
