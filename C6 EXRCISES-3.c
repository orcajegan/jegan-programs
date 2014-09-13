/* program for division of two number to display  three decimal place
   jegan september 2014 */

#include <stdio.h>

int  main (void)
{
	int  number1 ;
	int  number2 ;
	float result ;
	
	printf ("Enter the number1=");
	scanf ("%i",&number1);
	printf ("Enter the number2=");
	scanf ("%i",&number2);
	result = number1 % number2 ;
	
	if (number1 != 0 && number2 != 0)
  	printf ("The result is=%.3f\n",result);
	else 
	printf ("Zero not divisible");
	
	return 0 ;
		
	}

