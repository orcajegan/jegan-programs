/* program to illustrate the array of structure
 * jegan october 2014 */
#include <stdio.h>
struct time
{
	int hour;
	int minutes;
	int seconds;
};
int main (void)
{
	struct time timeupdate (struct time now);
	struct time testtime [5] = {{12,59,59},{11,55,50},
	                    {10,40,59},{2,50,34},{24,8,8}};
	                    
	int i; 
	for (i =0 ; i < 5; ++i){
	printf ("Time is %.2i:%.2i:%.2i ",testtime[i].hour,
	            testtime[i].minutes,testtime[i].seconds);
	testtime[i] = timeupdate(testtime[i]);
	
	printf (".....one seconds later %.2i:%.2i:%.2i\n",testtime[i].hour,
	                  testtime[i].minutes,testtime[i].seconds);
	   }
	return 0;
}
struct time timeupdate (struct time now)
{
	 ++now.seconds;
	 if (now.seconds == 60){
	 	now.seconds = 0;
	 	now.minutes+1;
	 if(now.minutes == 60){
	  now.minutes = 0;
	 	now.hour+1;
	 if(now.hour == 12)
	  now.hour = 0;
	 }	
	 }
	 return now;
}
