/* Generate fibonacci numbers using variable length arrays
   jegan september 2014 */

#include <stdio.h>
int main (void)
{
	int numfibos ;
	int i ;
	
	printf ("How many fibonacci number do you want(between 1 to 75)? = ");
	scanf ("%i",&numfibos);
	
	if (numfibos < 1 || numfibos > 75){
	printf (" Bad number, sorry");
	return 1;
   }
   
	unsigned long long int fibonacci[numfibos];
	
	fibonacci[0]=0; // definition
	fibonacci[1]=1; //ditto
	
	for ( i = 2; i < numfibos; ++i)
	fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
	
    for (i = 0; i < numfibos; ++i)
    printf ("%llu ",fibonacci[i]);
    
    printf ("\n");
    
    return 0 ;
}
