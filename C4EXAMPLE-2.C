// Illustrate the use of various arithmetic operaters
#include <stdio.h>

int main (void)
{
  int a = 50;
  int b = 20;
  int c = 30;
  int d = 40;
  int result;

  result = a - b; //subtraction
  printf ("a - b =  %i \n",result);

  result = a * b; //multiplication
  printf ("a * b = %i \n",result);

  result = d - b ; //division
  printf ("d / b = %i\n",result);

  result = a + d * c ; // precedence
  printf ("a + d * c =%i\n",result);

  return 0;

  }
