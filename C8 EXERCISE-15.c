/* ascending order
 * jegan,september 2014 */
 
 #include <stdio.h>
 
 	int i;
 	int a[10];
 	int type;
 	int n;
 	
 int ascend()
 {
 	int j;
 	int temp;
 	
 	if(type == 0)
 	{
 	for(i = 0; i < n - 1; i++)
 	{
 		for(j = i;j < n; j++)
 			if(a[i] > a[j])
 			{
 				temp = a[i];
 				a[i] = a[j];
 				a[j] = temp;
 			}
 	}
	}
	else if(type == 1)
	{
	for(i = 0; i < n - 1; i++)
 	{
 		for(j = i;j < n; j++)
 			if(a[i] < a[j])
 			{
 				temp = a[i];
 				a[i] = a[j];
 				a[j] = temp;
 			}
 	}	
	}
	else
	{
		printf("bad option\n");
	}
 }
 
 int main(void)
 {
 	printf("enter the array size\n");
 	scanf("%i", &n);
 	
 	printf("enter your array values\n");
 	for(i = 0; i < n;i++)
 	{
 		scanf("%i", &a[i]);
 	}
 	
 	printf("array before sort\n");
 	
 	for(i = 0;i < n; i++)
 	{
 		printf("%i ", a[i]);
 	}
 	printf("\n");
 	
 	printf("enter the type of sort ascend(enter 0) descend(1)");
 	scanf("%i", &type);
 	
 	ascend(a, n, type);
 	for(i = 0; i < n; i++)
 	{
 		printf("%i\n", a[i]);
 	}
 	
 	return 0;
 }
