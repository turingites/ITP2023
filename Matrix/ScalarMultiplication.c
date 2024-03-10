// Write a C program to perform scalar matrix multiplication.

#include <stdio.h>
int main(void)
{
   int rows, columns, scalar;
   printf("Enter the number of rows in the matrix: ");
   scanf("%d", &rows);
   printf("Enter the number of columns in the matrix: ");
   scanf("%d", &columns);
   

   int matrix[rows][columns];

   for(int row = 0; row < rows; row++)
   {
    for(int column = 0; column < columns; column++)
    {
        printf("Enter an element: ");
        scanf("%d", &matrix[row][column]);
    }
   }

   printf("Enter the scalar to perform multiplication: ");
   scanf("%d", &scalar);

   for(int row = 0; row < rows; row++)
   {
    for(int column = 0; column < columns; column++)
    {
        printf(" %d ", scalar*(matrix[row][column]));
    }
    printf("\n");
   }
}