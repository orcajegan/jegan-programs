/* Program to calculate the absolute value
   jegan sept 2014 */
   
#include <stdio.h>

float absolutevalue (float x)
{
	if (x < 0)
	x = -x;
	
	return x;
}

int main (void)
{
	int i1 = -716;
	float f1 = -15.5;
	float f2 = 20.0;
	float f3 = -5.0;
	float result;
	result = absolutevalue (f1);
	printf ("result = %.2f\n",result);
	printf ("f1 = %.2f\n",f1);
	
	result = absolutevalue (f1) + absolutevalue (f2);
	printf ("result = %.2f\n",result);
	
	result = absolutevalue ((float) i1);
	printf ("result = %.2f\n",result);
	
	result = absolutevalue (i1);
	printf ("result = %.2f\n",result);
	
	printf ("%.2f\n", absolutevalue (-6.0) / 4);
	
	
	return 0;
	}

