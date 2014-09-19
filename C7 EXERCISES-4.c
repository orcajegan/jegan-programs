/* a program that calculates the average of an array of 10 floating-point values.
  jegan september 2014 */

#include <stdio.h>

int main (void) 

{
	float average;
	int values[10];
	int i;
	float number ;
	float total ;
    int n = 10;
	printf ("Enter the array values:\n");
	for (i = 0; i <= n; ++i){
	printf ("values[%i]= ",i);
	scanf ("%f",&number);
    values[i] = number;
	total += values[i];
   }
   
   average = total / n ;
   printf ("The average of ten floating array values = %f",average);	
}
