// program for triangular formula
#include <stdio.h>

int main (void)
{
	int n , triangularnumber;
	
	printf ("enter the triangular number");
	scanf("%i",&n);
	
	triangularnumber = (n(n+1) / 2) ;
	
	printf ("the = %i  triangularnumber is = \n"n,triangularnumber);
	
	return 0 ;
}
