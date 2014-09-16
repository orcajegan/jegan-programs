/* program to generate first 15 fibonacci numbers
  jegan september 2014 */

#include <stdio.h>

int main (void)
{
	int fibonacci[15] ;
	int i ;
	fibonacci[0] = 0 ; // definition
	fibonacci[1] = 1 ; // ditto
	
	for (i = 2; i < 15; ++i)
	fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
	
	for (i = 0; i < 15;++i)
	printf ("%i\n",fibonacci[i]);
	
	return 0 ;
}
