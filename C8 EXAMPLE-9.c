/* Function to find the minimum value in an array
   jegan september 2014 */
   
#include <stdio.h>

int minimum (int values[10])
{
	int i ;
	int minvalue;
	
	minvalue = values[0];
	
	for (i = 1; i < 10; ++i)
	if  (values[i] < minvalue)
	   minvalue = values[i];
	   
	return minvalue;
}

int main (void)
{
	int minscore;
	int scores[10];
	int i ;
    int minimum (int value[10]);
    
	printf ("Enter the 10 scores\n");
	 
	for (i = 0; i < 10; ++i) 
	scanf ("%i",&scores[i]);
	
	minscore = minimum (scores);
	printf ("minimum scores is %i\n",minscore);
	
	return 0;
	
}
