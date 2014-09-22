/* program to sort an array of intergers into ascending order
   jegan september 2014 */
   
#include <stdio.h>

void sort (int a[], int n)
{
	int i ;
	int j ;
    int temp ;
    
    for (i = 0; i < n-1; ++i)
    for (j = i+1; j < n; ++j)
       if(a[i] > a[j])
       {
       	temp = a[i];
       	a[i] = a[j];
       	a[j] = temp ;
       }
}

int main (void)
{   
    int i;
	int  array[10] = {40, -5, 60, 45, -2, 20, 35, 68, 40};
	void sort (int a[], int n);
	
	printf ("Array element before sort:\n");
	 
    for (i = 0; i < 10; ++i)
	printf ("%i  ",array[i]);
	
	sort (array, 10);
	
	printf ("\n\n the array after the sort \n");
	for (i = 0; i < 10; ++i)
	printf ("%i ", array[i]);
	
	printf ("\n");
	return 0 ;
	
	}
