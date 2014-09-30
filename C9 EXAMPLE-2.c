/* program to determine tomorrow's data
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
	
	struct date today, tomorrow;
	
	const int dayspermonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	printf(" Enter today's  data (mm dd yyyy):");
	scanf("%i%i%i",&today.month,&today.day,&today.year);
	
	if (today.day != dayspermonth[today.month-1]){
	tomorrow.day = today.day + 1;
	tomorrow.month = today.month;
	tomorrow.year = today.year;
}

  else if (today.month == 12){  // end of year
    
	tomorrow.day = 1;
    tomorrow.month = 1;
    tomorrow.year = today.year + 1;
    
  }

  else {
  	    tomorrow.day = 1;
  	    tomorrow.month = today.month + 1;
  	    tomorrow.year = today.year;
  }
  
  printf ("Tomorow's date is %i/%i/%.2i.\n", tomorrow.month,
        tomorrow.day,tomorrow.year%100);
        
        return 0;
  
  }
