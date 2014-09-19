/* program to generate fibonacci number using three variables
   jegan september 2014 */

#include <stdio.h>

int main (void)
{
	int a = 0;
	int b = 1;
	int c,i;
	
    printf ( "%i %i ",a,b);
	for ( i = 1; i < 15; ++i)
	  {
	    c = a + b ;
		printf ("%i  ",c);
		a = b;
		b = c;
	}
		return 0;
}

