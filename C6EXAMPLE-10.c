/* program to gerate table of prime number */

#include <stdio.h>

int main (void)
{
	int p ;
	int d ;
	_Bool prime ;
	
	for ( p =2 ; p <= 50 ; ++p)
	{
		prime = 1 ;
	
		for (d = 2 ; d < p; ++d)
		  if (p % d == 0)
		  prime = 0 ;
		  
		  if (prime != 0)
		  printf ("%i   ",p);
		    	}
    printf ("\n");
    return 0 ;
}

