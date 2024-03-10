#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *intArray = NULL;
    intArray = ((int*)calloc(3, sizeof(int)));
    *(intArray + 0) = 11;
    *(intArray + 1) = 12;
    *(intArray + 2) = 13;

    for(int i = 0; i < 3; i++)
    {
        printf("(*intArray + %d) --> %d \n", i, *(intArray+i));
    }
    printf("\n");

    for(int i = 0; i < 3; i++)
    {
        printf("intArray[%d] --> %d \n", i, intArray[i]);
    }
    printf("\n \n");

// Reallocation:

intArray = (int*)realloc(intArray, 5*sizeof(int));

*(intArray + 3) = 14;
*(intArray + 4) = 15;

for(int i = 0; i < 5; i++)
{
    printf("intArray[%d] --> %d \n", i, intArray[i]);
}
}