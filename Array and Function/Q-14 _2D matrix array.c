//Perform 2D matrix array

#include <stdio.h>
main() 
{
    int rows, cols, i, j;

    printf("\n\n\t Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("\n\n\t Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
   
    printf("\n\n\t Enter the elements of the matrix: " );
    
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            printf("\n\n\t Element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n\n\t The matrix is: ");
    
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

}
