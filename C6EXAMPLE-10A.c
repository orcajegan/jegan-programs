/* program to gerate table of prime number */

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int p ;
	int d ;
	bool prime ;
	
	for ( p = 2 ; p <= 50 ; ++p)
	{
		prime = true ;
		for (d = 2 ; d < p; ++d)
		  if (p % d == 0)
		  prime = false;
		  
		  if (prime != true)
		  printf ("%i   ",p);
		    	}
    printf ("\n");
    return 0 ;
}

