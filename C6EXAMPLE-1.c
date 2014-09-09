// program to calculate the absolute of an integer
#include <stdio.h>

int main (void)
{
	int number;
	
	printf (" enter the number \n");
	scanf("%i",&number);
	
	if (number < 0)
	number = -number ;
	printf ("the absolute value is = %i \n ",number);
	
}
