// program to reverse the number digits with do
#include <stdio.h>
int  main (void)
{ 
	int number, rightdigits ;
	
	printf ("enter the number for rever the digits \n ");
		 	scanf("%i",&number);
	
	do{
		rightdigits = number % 10 ;
		printf("%i",rightdigits);
		number = number / 10 ;
    	}

	while (number != 0);
	return 0;
 }
