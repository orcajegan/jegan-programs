/* Chapter 7 Exercises-5 program 
  jegan september 2014 */
  
#include <stdio.h>

int main (void)
{
	int i ;
	int j ;
	int number[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	for (j = 0; j < 10; ++j)
	for (i = 0; i < j; ++i)
	number[j] += number[i];
	
	for (j = 0; j < 10; ++j)
	printf ("%i ",number[j]);
	
	printf ("\n");
	return 0;
}
