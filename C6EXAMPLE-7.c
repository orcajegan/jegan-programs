// program to categorize the single character that is enter in the terminal 

#include <stdio.h>

int main (void)
{
	char c ;
	
	printf (" Enter a single character : \n");
	scanf ("%c",&c);
	
	if ( (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' ))
	printf (" It is a alphabetic. \n");
	
	else if (c >= '0' && c <= '9')
	printf (" It is digit .\n ");
	
	else 
	printf (" It is special character .\n");
	
	return 0 ;
} 
