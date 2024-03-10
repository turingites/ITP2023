// Write a C program to read elements in two matrices and multiply them. 

#include <stdio.h>
int main(void)
{
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix1[rows][columns], matrix2[rows][columns], matrix3[rows][columns];

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
   

    for(int row = 0; row < rows; row++)
    {
        for(int column = 0; column < columns; column++)
        {
            int sum = 0;
            for(int i = 0; i < rows; i++)
            {
                sum = sum + (matrix1[row][i]*matrix2[i][column]);
            }
            matrix3[row][column] = sum;
        }
    }

    for(int row = 0; row < rows; row++)
    {
        for(int column = 0; column < columns; column++)
        {
            printf(" %d ", matrix3[row][column]);
        }
        printf("\n");
    }
}