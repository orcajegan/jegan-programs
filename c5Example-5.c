// program for nested for loops
#include <stdio.h>

int main (void)
{
	int n ;
	int number ;
	int counter ;
	int triangularnumber ;
	
	for (counter = 1 ; counter <= 5; counter ++ )
	{
		printf (" What triangular number do you want ");
		scanf ("%i",&number);
		
		triangularnumber = 0 ;
	
		for (n = 1; n <= number ; n++  )
		triangularnumber += n ;
		printf ("triangular number  %i  is   %i \n",number, triangularnumber);
		
	}
    
    return 0;
}

