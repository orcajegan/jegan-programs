/* program to calculate the average of a set of grades  and count the number 
   of failing in the grads */

#include <stdio.h>

int main (void)
{
	int numberofgrade ;
	float average ;
	int  gradetotal = 0 ;
	int  failurecount=0 ;
	int i ;
	int grade ;
	
		
	printf ("Enter the number of grades = ");
	scanf ("%i",&numberofgrade);
	
	for(i=1 ;i <= numberofgrade; i++)
	{
		printf("Enter the grade #%i: ",i);
		scanf("%i",&grade);
	    
		gradetotal =  gradetotal + grade ;
		
    if (grade < 65)
       ++ failurecount ;
              
	}
	
	average = (float) gradetotal / numberofgrade ;
	printf (" the average of grade = %.2f \n ",average);
	printf ("the failure count = %i",failurecount);

    return 0 ;
 }   


