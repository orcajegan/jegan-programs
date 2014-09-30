/* finding matrix transpose
 * variacle length arrays
 * jegan, september 2014 */
 
 #include <stdio.h>
 
 int transpose(int a[10][10], int b[10][10],int row, int col)
 {
 	int i;
 	int j;
 	
 	for(i = 1; i <= row; i++)
 	{
 		for(j = 1; j <= col; j++)
 		{
 			b[j][i] = a[i][j];
 		}
 	}
 	for(j = 1; j <= col; j++)
 	{
 		printf("\n");
 		for(i = 1; i <= row; i++)
 		{
 			printf("%i\t", b[j][i]);
 		}
 	}
 }
 
 int main(void)
 {
 	int a[10][10];
 	int b[10][10];
 	int i;
 	int j;
 	int row;
 	int col;
 	
 	printf("enter the no of rows");
 	scanf("%i", &row);
 	printf("enter the number of columns");
 	scanf("%i", &col);
 	
 	printf("enter the array values\n");
 	for(i = 1; i <= row; i++)
 	{
 		for(j = 1; j <= col; j++)
 		{
 			scanf("%i", &a[i][j]);
 		}
 	}
 	for(i = 1; i <= row; i++)
 	{
 		printf("\n");
 		for(j = 1; j <= col; j++)
 		{
 			printf("%i\t", a[i][j]);
 		}
 	}
 	transpose(a, b, row, col);
 	
 	return 0;
 }
