/* program to calculate elapsed time 
 * between two time
 * jegan, october 2014 */
 
 #include <stdio.h>
 
 struct time
 {
 	int hour;
 	int minutes;
 	int seconds;
 };
 int main(void)
 {
 	struct time elapsedtime(struct time t1, struct time t2);
 	struct time startingtime;
	struct time endingtime;
 	
 	printf("enter the starting time\n");
 	scanf("%i%i%i", &startingtime.hour, &startingtime.minutes, &startingtime.seconds);
 	
 	printf("enter the ending time\n");
 	scanf("%i%i%i", &endingtime.hour, &endingtime.minutes, &endingtime.seconds);
 	if(startingtime.hour < 24 && endingtime.hour < 24 && startingtime.minutes < 60 && endingtime.minutes < 60 
	    && startingtime.seconds < 60 && endingtime.seconds <60)
 	{

 		elapsedtime(startingtime, endingtime);
 	}
 	else
 	{
 		printf("enter the correct time \n");
 	}
 	
 	return 0;
 }
 
 struct time elapsedtime(struct time t1, struct time t2)
 {
 	int n1;
 	int n2;
 	int n3;
 	int t11;
 	int t22;
 	int result;
 	int temp;
 	
 		t11 = t1.hour * 60 * 60 + t1.minutes * 60 + t1.seconds;
 		t22 = t2.hour * 60 * 60 + t2.minutes * 60 + t2.seconds;
 		if(t22 > t11)
 		{
 			result = t22- t11;
 		}
 		else
 		{
 			result = 86400 - t11 + t22;
 		}
 		temp = result / 60;
 		n1 = temp / 60;
 		n2 = temp % 60;
 		n3 = result % 60;
 		printf("%.2i:%.2i:%.2i\n", n1, n2, n3);
 	
 }
 
