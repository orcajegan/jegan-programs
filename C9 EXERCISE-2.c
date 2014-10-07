/* program to calculate elapsed days 
 * between two dates
 * jegan, october 2014 */
 
 #include <stdio.h>
 
 struct date
 {
 	int day;
 	int month;
 	int year;
 };
 int main(void)
 {
 	int elapseddays(struct date d1, struct date d2);
 	struct date startingdate;
	struct date endingdate;
	int elapseddays1;
 	
 	printf("enter the starting day\n");
 	scanf("%i%i%i", &startingdate.day, &startingdate.month, &startingdate.year);
 	
 	printf("enter the ending date\n");
 	scanf("%i%i%i", &endingdate.day, &endingdate.month, &endingdate.year);
 	
 	elapseddays1 = elapseddays(startingdate, endingdate);
 	
 	printf("%i\n", elapseddays1);
 	
 	return 0;
 }
 
 int elapseddays(struct date d1, struct date d2)
 {
 	int n1;
 	int n2;
 	int elapseddays1;
 	//int f(struct date d);
 	//int g(struct date d);
 	if( d1.month <= 2)
 	{
 		n1 = (1461 * (d1.year - 1)) / 4 + (153 * (d1.month + 13) )/ 5 + (d1.day - 1);
 	}
 	else
 	{
 		n1 = (1461 * (d1.year)) / 4 + (153 * (d1.month + 1) )/ 5 + (d1.day - 1);
 	}
 	//printf("%i\n", n1);
 	if( d2.month <= 2)
 	{
 		n2 = (1461 * (d2.year - 1)) / 4 + (153 * (d2.month + 13) )/ 5 + (d2.day - 1);
 	}
 	else
 	{
 		n2 = (1461 * (d2.year)) / 4 + (153 * (d2.month + 1) )/ 5 + (d2.day - 1);
 	}
 	//printf("%i\n", n2); 	
 	elapseddays1 = n2 - n1;
 	
	//printf("%i", elapseddays1 );
 	
 	return elapseddays1;
 }
 
 
