// Write a C program to find sum of each row and column of a matrix.

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

    

    for(int row = 0; row < rows; row++)
    {
        int rowsum = 0;
        for(int column = 0; column < columns; column++)
        {
            rowsum = rowsum + matrix[row][column];
        }
        printf("The sum of the elements of the %dth row is %d.\n", row+1, rowsum);
    }

    for(int row = 0; row < rows; row++)
    {
        int columnsum = 0;
        for(int column = 0; column < columns; column++)
        {
            columnsum = columnsum + matrix[column][row];
        }
        printf("The sum of the elements of the %dth column is %d. \n", row+1, columnsum);
    }


}