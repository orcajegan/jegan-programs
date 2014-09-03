/* find the 200th triangularnumber 
   introduction to for statement */
 #include <stdio.h>
 
 int main (void)
 {
 	int n;
 	int triangularnumber;
 	
 	triangularnumber = 0;
 	
 	for (n = 1; n <= 200; n=n+1)
 	
	triangularnumber = triangularnumber + n ;
 	printf ("the 200th triangularnumber is = %i\n",triangularnumber);
 	
 	return 0;
 	
 }  
   
