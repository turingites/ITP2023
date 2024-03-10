// Write a C program to check whether two matrices are equal or not.

#include <stdio.h>

int main(void)
{
    int rows, columns;
    printf("Enter the number of rows in the matrices: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrices: ");
    scanf("%d", &columns);
    int matrix1[rows][columns], matrix2[rows][columns];

    for(int row = 0; row < rows; row++)
    {
        for(int column = 0; column < columns; column++)
        {
            printf("Enter an element in the first matrix: ");
            scanf("%d", &matrix1[row][column]);
        }
    }

    for(int row = 0; row < rows; row++)
    {
        for(int column = 0; column < columns; column++)
        {
            printf("Enter an element in the second matrix: ");
            scanf("%d", &matrix2[row][column]);
        }
    }

    int isEqual = 1;

    for(int row = 0; row < rows; row++)
    {
        for(int column = 0; column < columns; column++)
        {
            if (matrix1[row][column] != matrix2[row][column])
            {
                isEqual = 0;
            }
        }

    }

    if(isEqual == 1)
    {
        printf("The matrices are equal.");
    }
    else if(isEqual == 0)
    {
        printf("The matrices are not equal.");
    }
}