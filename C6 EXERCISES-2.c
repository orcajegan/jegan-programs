/* program to check the first number divise the second number
   jegan september 12, 2014 */
#include <stdio.h>

int main (void)
{
	int number1 ;
	int number2 ;
	int result ;
	
	printf ("Enter the number1  \n");
	scanf ("%i",&number1);
	printf ("Enter the number2  \n");
	scanf ("%i",&number2);
	
	result = number1 % number2 ;
	
	if ( result == 0)
	printf (" Number1 divisible by number2  \n");
	
	else 
	printf (" Number1 is not divisible by number2 \n");
	
	return 0 ;
		
	}
