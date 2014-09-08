// program to find greast common divisor 
// of the two nonnagtiveinteger
#include <stdio.h>

int main (void)
{
	int temp, u , v ;
	
	printf ("please enter the two nonnagative integer u an v \n");
	scanf("%i%i",&u,&v);
	
	while (v != 0)
	{
		temp = u % v ;
		 u = v ;
		 v = temp ;
	}

     printf ("Their greast comman divisor is %i \n",u);
	     
return 0 ;
}

