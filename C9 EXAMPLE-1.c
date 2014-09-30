/* program to illustrate a structure 
 * jegan september 2014 */
 
 #include <stdio.h>
 
 int main (void)
 {
 	struct date
 	{
 		int month ;
 		int day ;
 		int year ;
  	};
  	
  	struct date today;
  	
  	today.month = 9;
  	today.day = 25;
  	today.year = 2014;
  	
  	printf ("Today is data us %i/%i/%.2i\n",today.month,today.day,today.year%100);
  	
  	return 0;
 }
