// Write a C program to find sum of main diagonal elements of a matrix.

#include <stdio.h>
int main(void)
{
    int rows, columns;
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

    int sum = 0;

    for(int row = 0; row < rows; row++)
    {
        for(int column = 0; column < columns; column++)
        {
           if (row == column)
           {
            sum = sum + matrix[row][column];
           }
        }
    }

    printf("The sum of the diagonal elements is %d.", sum);
}