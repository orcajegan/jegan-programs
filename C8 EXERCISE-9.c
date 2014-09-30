/* lcm of two non negative integers
 * returning the results
 * jegan, september 2014 */
 
 #include <stdio.h>
 
 int gcd(int a, int b)
 {
 	int temp;
 	
 	while(b != 0)
 	{
 		temp = a % b;
 		a = b;
 		b = temp;
 	}
 	
 	return a;
 }

int lcm(int a, int b)
{
	int lcm;
	
	lcm = a * b / gcd(a, b);
	
	return lcm;
} 
 int main(void)
 {
 	int result;
 	
 	result = lcm(15, 10);
 	printf("lcm of 15 and 10 is %i\n", result);

 	result = lcm(45, 15);
 	printf("lcm of 45 and 15 is %i\n", result);
 	
 	return 0;
 }
