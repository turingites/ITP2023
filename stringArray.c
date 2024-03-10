// Create a 32-element char 1D-array (ptrString) dynamically.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *ptrString = NULL;
    ptrString = (char*) malloc(32*sizeof(char));
    strcpy(ptrString, "Programming in C");
    printf("ptrString --> %s", ptrString);
}