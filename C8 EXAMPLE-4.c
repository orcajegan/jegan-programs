/* Function to calculate the nth triangular number
   jegan september 2014 */
   
#include <stdio.h>

void calculatetriangularnumber(int n)
{
	int i;
	int triangularnumber = 0;
	
	for (i = 1; i <= n; ++i)
	triangularnumber += i;
	
	printf ("Traiangularnumber %i is %i\n", n, triangularnumber);
	
}

int main (void)
{
	calculatetriangularnumber(10);
	calculatetriangularnumber(20);
	calculatetriangularnumber(50);
	
	return 0;
}
