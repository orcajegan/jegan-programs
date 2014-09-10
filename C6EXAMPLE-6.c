// program to impelement the sing funtion
#include <stdio.h>

int main (void)
{
	int number ;
	int sing ;
	
	printf (" Enter the number");
	scanf ("%i",&number);
	
	if (number < 0)
	sing = -1 ;
	
	else if (number == 0)
	sing = 0 ;
	
	else 
	sing = 1 ;
	
	printf ("sing = %i ",sing);
	
	return 0 ;
	
}
