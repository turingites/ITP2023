// Write a C program to read elements in a matrix and find the sum of minor diagonal.

#include <stdio.h>
int main(void)
{
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
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
            if(row + column == (rows-1))
            {
                sum = sum + matrix[row][column];
            }

        }
    }

    printf("The sum of the minor diagonals is %d.", sum);
}