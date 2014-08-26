#include <stdio.h>

int main(void)
{
  int n;
  int hours;
  int temp;
  int minutes;
  int sconds;

  printf("Program for conver the sconds into: hours/minutes/sconds\n");
  printf("Enter the seconds \n");
  scanf("%d",&n);
  hours = n/3600;
  temp = n%3600;
  minutes = temp/60;
  sconds = temp%60;
  printf("The Result in: Hours/minutes/sconds=%i/%i/%i \n",hours,minutes,sconds);

  return 0;

 }
