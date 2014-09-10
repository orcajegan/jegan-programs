/* program to dermine if a year is leap or not */
#include <stdio.h>

int main (void)
{
	int ream_4 ;
	int ream_100 ;
	int ream_400 ;
	int year ;
	
	printf (" Enter the year  ");
	scanf("%i",&year);
	
	ream_4 = year % 4 ;
	ream_100 = year % 100 ;
	ream_400 = year % 400 ;
	
	if (ream_4 == 0 && ream_100 != 0 || ream_400 == 0)
	printf (" it is year leap year  \n");
	
	else 
	printf (" It is not a leap year ");
	
	return 0 ;
	
}
