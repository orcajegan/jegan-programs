/* modified program for initializing array zero uesing for loop
  jegan september 2014 */

#include <stdio.h>

int main (void)
{
	int index ;
	int values[10];
	int n = 10 ;
	
	for (int number = 0; number <= n; ++number )
	     values[number] = number ;
	
	for (index = 0; index <= n; ++index)
	    printf ("array values = %i",values[index]);
	    
	return 0;
	
	
}
