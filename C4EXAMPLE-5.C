// basic conversion in c
#include <stdio.h>

int main (void)
{

  float f1 = 123.125, f2 ;
  int i1, i2 = -150 ;
  char  c = 'a' ;

  clrscr();
  i1 = f1;       // floating into integer conversion
  printf ("%f assigned to an int produce %i \n", f1, i1);

  f1 = i2 ;      // integer into float conversion
  printf ("%i assigned to an float produce %f\n",i2, f1);

  f1 = i2 / 100 ;  // integer divided by integer
  printf ("%i divided by 100 produces %f\n ",i2, f1);

  f2 = i2 / 100.0;  // integer divided by a float
  printf ("%i divided by 100 produces %f\n",i2, f2);

  f2 = (float) i2 / 100;  // type cast operator
  printf ("(float %i divided by 100 produces %f \n",i2, f2);

  return 0 ;

  }

