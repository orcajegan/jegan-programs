/* Program to evaluate the simple expressions of the form 
   number operator number  */ 
#include <stdio.h>

int main (void)
{
	float number1 ;
	float number2 ;
	char operator ;
	
	printf (" Enter your expression. \n");
	scanf ("%f %c %f",&number1,&operator,&number2);
		
	if (operator == '+')
	printf ("%.2f\n",number1 + number2);

	else if(operator == '-')
	printf ("%.2f \n",number1 - number2);

	else if(operator == '*')
	printf ("%.2f\n",number1 * number2);
	
	else if (operator == '/')
	printf ("%.2f\n",number1 / number2);
	
	return 0 ;
	
	} 
