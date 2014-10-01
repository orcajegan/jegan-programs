/* program to determine tomorrow's date
 * jegan september 2014 */
 
 #include <stdio.h>
 #include <stdbool.h>
 
 struct date 
 {
 	int month;
 	int day;
 	int year;
 	
 };
 
 // function to calculate the tomorrow's date
  
 struct date dateupdate (struct date today)
 {
 	struct date tomorrow;
 	int numberofdays (struct date d);
 	
 	if (today.day != numberofdays (today)){
 		tomorrow.day = today.day + 1;
 		tomorrow.month = today.month ;
 		tomorrow.year = today.year;
 	
	  	}
	  	
	else if (today.month == 12){
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}
	
	else {
		tomorrow.day = 1;
		tomorrow.month = today.month + 1 ;
		tomorrow.year = today.year;
	}
	return tomorrow ;
		
 }
 
 // function to find the number of days in month 
 
 int numberofdays (struct date d)
 {
 	int days ;
 	bool isleapyear (struct date d);
 	const int dayspermonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 	
 	if (isleapyear && d.month == 2 )
 	days =29;
 	
 	else 
 	  days = dayspermonth [d.month - 1];
 	  
 	  return days;
 	 }
 	 
// function to determine if it's leap year

bool isleapyear (struct date d) 
{
	bool leapyearflag;
	
	if ( (d.year % 4 == 0 && d.year % 100 !=0)  ||
	      d.year % 400 == 0)
	    leapyearflag = true;
	    
	else 
	     leapyearflag = false;
	     
	  return leapyearflag;
}	 

int main (void)
{
	struct date dateupdate (struct date  today);
	struct date thisday , nextday ;
	 
	printf (" Enter today's date (mm dd yyyy):");
	scanf ("%i%i%i",&thisday.month,&thisday.day,&thisday.year);
	
	nextday = dateupdate (thisday);
	
	printf ("Tomorrow's date is %i/%i/%.2i.\n",nextday.month, nextday.day,nextday.year%100);
	
	return 0;
}
