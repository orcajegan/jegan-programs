#include <stdio.h>

int main (void)
{
  int     integervar = 345 ;
  float   floatvar = 58.46 ;
  double  doublevar =45.34e+10 ;
  char    charvar = 'j';

  clrscr();
  printf ("integervar = %i\n",integervar);
  printf ("floatvar = %f\n",floatvar);
  printf ("doublevar = %e\n",doublevar);
  printf ("doublevar = %g\n",doublevar);
  printf ("charvar = %c\n",charvar);


  return 0;

  }