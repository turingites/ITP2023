// Create a 3-element integer 1D-array ( intArray[ ] ) dynamically.
// Pass the dynamic array to a function and square them in-place. Use pow( ) function from math.h.
// Access the contents of dynamic array in various ways.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Square(int* intArray)
{
    int x;
    for(int i = 0; i < 3; i++)
    {
        intArray[i] = pow(intArray[i], 2);
    }
    
    for(int i = 0; i < 3; i++)
    {
        printf("intArray[%d] --> %d \n", i, intArray[i]);
    }
}

int main(void)
{
    int *intArray = NULL;
    intArray = (int*)malloc(3*sizeof(int));

    for(int i = 0; i < 3; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &intArray[i]);
    }

    printf("\n");

    for(int i = 0; i < 3; i++)
    {
        printf("intArr[%d] --> %d \n", i, intArray[i]);
    }

    Square(intArray);

}

