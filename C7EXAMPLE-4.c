/* modified program to generate prime number 
   jegan september 2014 */

#include <stdio.h>
#include <stdbool.h>
int main (void)
{
	int primes[50];
	int primeindex = 2;
	int p ;
	int i ;
	bool isprime ;
	
	
	primes[0] = 2 ;
	primes[1] = 3 ;
	
	for (p = 5; p <= 50; p = p + 2 ) {
		isprime = true ;
	
	for (i = 1; isprime && p / primes[i] >= primes[i]; ++i)
		if (p % primes[i] == 0)
		isprime = false ;
	   
	   	if (isprime == true){
	   primes[primeindex] = p;
	   ++primeindex ;
	      }
	 	    
	}
    for (i = 0; i <= primeindex ; ++i)
    printf("%i ",primes[i]);
    
    printf("\n");
    
	return 0 ;	
	 
}
