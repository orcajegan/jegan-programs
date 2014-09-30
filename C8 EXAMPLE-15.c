/* program  to illustrate static and automatic variables
   jegan september 2014 */
   
#include <stdio.h>

void auto_static (void)
{
	int autovar = 1;
	static int staticvar = 1;
	
	printf ("automatic =%i, static =%i\n", autovar, staticvar);
	
	++autovar;
	++staticvar;
	
}

int main (void)
{
	int i;
	
	void auto_static (void);
	
	for (i = 0; i < 5; ++i)
	  auto_static();
	  
	  return 0;
}
