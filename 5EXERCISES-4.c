// program for factorial number

#include <stdio.h>

int main (void)
{
	int n , i , fact=1 ;
	
	printf ("Enter the number  \n");
	scanf ("%i",&n);
	
	if(n==0)
	{
		printf ("the factorial number is = 1\n ");
	}
	else
	{
	
	for (;n>0;)
	{
		fact = fact * n ;
        n = n -1 ;
   	}	
   	printf (" the %i factorial number is = %i\n",n,fact);
	}

   return 0;	
}
