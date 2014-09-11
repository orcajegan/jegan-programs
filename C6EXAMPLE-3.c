// program to derterminde if a number is even or odd

#include <stdio.h>

int main (void)
{
	int numbertotest ; 
	int remainder ;
	
	printf (" Enter the your number to test =  ");
	scanf("%i",&numbertotest);
	
	remainder = numbertotest % 2 ;
	
	if (remainder == 0)
	printf ("given number is even.\n");
	
	if (remainder != 0)
	printf ("given number is odd.\n");
	
	return 0 ;
}
