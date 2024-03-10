// Write a C program to read elements in two matrices and add elements of both matrices. 

#include <stdio.h>
int main(void)
{
    int rows1, columns1, rows2, columns2;
    printf("Enter the number of rows in the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns in the first matrix: ");
    scanf("%d", &columns1);

    int matrix1[rows1][columns1];

    printf("Enter the number of rows in the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns in the second matrix: ");
    scanf("%d", &columns2);

    int matrix2[rows2][columns2];

    for(int row = 0; row < rows1; row++)
    {
        for(int column = 0; column < columns1; column++)
        {
            printf("Enter an element in matrix 1 [%d][%d]: ", row, column);
            scanf("%d", &matrix1[row][column]);
        }
    }

    for(int row = 0; row < rows2; row++)
    {
        for(int column = 0; column < columns2; column++)
        {
            printf("Enter an element in matrix 2 [%d][%d]: ", row, column);
            scanf("%d", &matrix2[row][column]);
        }
    }

      int matrix3[rows1][columns1];
    
    for(int row = 0; row < rows1; row++)
    {
        for(int column = 0; column < columns1; column++)
        {
            matrix3[row][column] = matrix1[row][column] + matrix2[row][column];
        }
    }

    for(int row = 0; row < rows1; row++)
    {
        for(int column = 0; column < columns1; column++)
        {
            printf("%d ", matrix3[row][column]);
        }
        printf("\n");
    }
}



