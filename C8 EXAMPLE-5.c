/* Function to find the greastest comman divisor of two 
nonnegative integer values and to return the result.
   jegan sept 2014 */
   
#include <stdio.h>

void gcd (int u, int v)
{
	int temp ;

   printf ("The gcd of %i and %i is ",u, v);
   
   	while (v != 0)
	{
		temp = u % v;
		u = v ;
		v = temp;
	}
	
	printf ("%i\n",u);
}

int main (void)
{ 
  gcd (150, 35);
    
  gcd (1026, 405);
   
  gcd (83, 240);
  
   return 0;	
}
