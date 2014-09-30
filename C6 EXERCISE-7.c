/* to generate a table of prime numbers
 * jegan, august 2014 */
 
 #include <stdio.h>
 #include <stdbool.h>
 
 int main(void)
 {
 	int p;
 	int d;
 	bool isPrime;
 	
	for( p = 1; p <= 50; p = p + 2 )
	 {
		isPrime = 1;
		
		for( d = 2; d < p; ++d )
			if( p % d == 0 )
			isPrime = 0;
			
			if( isPrime != 0 )
			printf("%i ", p);
	}
	printf("\n");
	
	return 0;
}
