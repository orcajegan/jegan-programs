/* square root of a number
 * with epsilon as an argument
 * jegan, september 2014 */
 
 #include <stdio.h>
 
 float absoluteval(float n)
 {
 	if(n < 0)
 		n = -n;
 	
	 return n;
 }
 
 float sqrt1(float n,float epsilon)
 {
 	float guess = 1.0;
 	
 	while(absoluteval(guess * guess - n) >= epsilon)
 	
		guess = ( n / guess + guess ) / 2.0;
 
 	return guess;
 }
 
 int main(void)
 {
 	printf("squreroot(4) = %f\n", sqrt1(4.0, 0.0001));
 	printf("squreroot(144) = %f\n", sqrt1(149.7, 0.0002));
 	
 	return 0;
 }
 
