/* digits of number with words
 * jegan, september 2014 */

#include <stdio.h>

int main(void)
{
	int number;
	int digit;
	int sum=0;
	
	printf("Enter your number\n");
	scanf("%i", &number);
	printf("%i\n\n", number);
	
	while(number != 0) 
	{
		digit = number % 10;
		number = number / 10;
		if(digit == 0 )
		printf("zero");
		else if(digit == 1)
		printf("one");
		else if(digit == 2)
		printf("two");
		else if(digit ==3)
		printf("three"); 
		else if(digit == 4)
		printf("four");
		else if(digit == 5)
		printf("five");
		else if(digit == 6)
		printf("six");
		else if(digit == 7)
		printf("seven");
		else if(digit == 8)
		printf("eight");
		else if(digit == 9)
		printf("nine");	
	}
	printf ("\n");
	
	return 0;
}
