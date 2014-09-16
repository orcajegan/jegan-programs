/* program for array of counters 
   jegan september 2014 */
#include <stdio.h>

int main (void)
{
	int ratingcounters[11], i , response ;
	
	for (i = 1 ; i <= 10 ; ++i)
	ratingcounters[i] = 0 ;
	
	printf (" Enter your responses\n");
	
	for (i = 1 ; i <= 20; ++i)
	{
	  scanf("%i",&response);
	if (response < 1 || response > 10)
	printf("Bad respose:%i\n",response);
	else 
	     ++ratingcounters[response];
     }
     printf (" \n\n Rating number of responses\n");
     printf("--------------------------------\n");
     
     for (i = 0; i <= 10; ++i)
     printf("%4i,%14i\n",i,ratingcounters[i]);
     
     return 0 ;
     
    
	}
