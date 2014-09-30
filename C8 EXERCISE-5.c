/* square root of a number
 * with double precision
 * 	jegan, september 2014 */

#include <stdio.h>

float absoluteValue(float n)
{
	if ( n < 0 )
		n = -n;
	
	return (n);
}

float squareRoot(float n)
{
	const float epsilon = .01;
	float guess = 1.0;

	while( absoluteValue(guess * guess - n) >= epsilon )
		guess = ( n / guess + guess ) / 2.0;
	
	return guess;
}

int main(void)
{
	printf("squareRoot (21.0) = %.2f\n", squareRoot(144.0));
	printf("squareRoot (44.0) = %.2f\n", squareRoot(44.0));
	
	return 0;
}
