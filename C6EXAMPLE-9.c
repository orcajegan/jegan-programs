/* program to evaluate simple expressions in a form 
   value1 operator value2  */
#include <stdio.h>

int main (void)
{
	float value1 ;
	float value2 ;
	char operator ;
	
	printf (" Enter in your expression .\n");
	scanf ("%f %c %f",&value1,&operator, &value2);
	
	switch (operator)
         {
         	case ('+'):
         		printf ("%.2f \n",value1 + value2);
         	    break ;	
            case ('-'):
			    printf ("%.2f\n",value1 - value2);
				break ;
			case ('*'):
			printf ("%.2f\n",value1 * value2) ;
			    break ;
			case ('/'):
			    if (value2 == 0)
			    printf ("It is division by zero.\n");
			    else 
			    printf ("%.2f \n",value1 / value2);
			    break ;
			default : 
			    printf ("It is special case operator.\n");
				break ; 
		
		        }
				
	    return 0 ;
				
	}
