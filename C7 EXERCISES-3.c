/* modified program for count the user rating  
  jegan september 2014 */

#include <stdio.h>

int main (void)
{
   int ratingCounters[11], i, response;
   int number;
   
   for ( i = 1; i <= 10; ++i )
   ratingCounters[i] = 0;
   printf ("How many number your going to enter");
   scanf("%i",&number);
   
   printf ("Enter your responses\n");
   
   for ( i = 1; i <= number; ++i ) {
   if (i == number)
   printf ("enter the last counter value %i\n",number);
   scanf ("%i", &response);
   
   if ( response < 1 || response > 10 )
   printf ("Bad response: %i\n", response);
   else
    ++ratingCounters[response];
    }

   printf ("\n\nRating Number of Responses\n");
   printf ("------ -------------------\n");
   
   for ( i = 1; i <= 10; ++i )
   printf ("%4i%14i\n", i, ratingCounters[i]);
   return 0;
}
