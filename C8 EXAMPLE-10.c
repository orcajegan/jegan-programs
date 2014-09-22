/* Revising the function to find the minumum value in an array 
   jegan september 2014 */
   
#include <stdio.h>

int minimum (int value[], int numberofelement)
{
	int minvalue ;
	int i;
	
	minvalue = value[0];
	
	for (i = 1; i < numberofelement; ++i)
	if  (value[i] < minvalue)
	minvalue = value[i];
	
	return minvalue;	
	
}

int main (void)
{
	int array1[5] = {3, -4, 5, 8, 12};
	int array2[7] = {35, 43, 25, 10, 46, 68, 90};
	int minimum (int value[], int numberofelement);
	
	printf ("array1 minimum is %i\n ",minimum(array1,5));
	printf ("array2 minimum is %i\n",minimum(array2,7));
	
	return 0;
}
