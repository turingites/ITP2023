// Create a 3 element integer array dynamically.
#include <stdio.h>
#include <stdlib.h>
int main(void)
{

int *intArray = NULL;
intArray = (int*)malloc(3*sizeof(int));

// Populating the array:

*(intArray + 0) = 11;
*(intArray + 1) = 12;
*(intArray + 2) = 13;

// Printing the array:

for(int i = 0; i < 3; i++)
{
    printf("*(intArray + %d) --> %d \n", i, *(intArray+i));
}

printf("\n");

for(int i = 0; i < 3; i++)
{
    printf("intArray[%d] --> %d \n", i, intArray[i]);
}

}