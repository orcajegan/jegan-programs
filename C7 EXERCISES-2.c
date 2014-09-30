/* modified program for initializing array zero uesing for loop
  jegan september 2014 */

#include <stdio.h>

int main (void)
{
	int index ;
	int number;
	int values[10];
	int n = 10 ;
	int j = 0;
	
	for (number = 0; number <= n; ++number )
	     values[number] = j ;
	
	for (index = 0,number=0; index <= n; ++number,++index)
	    printf ("array values[%i]=%i\n",number,values[index]);
	    
	return 0;
	
	
}
