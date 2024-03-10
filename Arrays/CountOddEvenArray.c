// Write a C program to count total number of even and odd elements in an array.
#include <stdio.h>
int main(void)
{
    int evencount = 0;
    int oddcount = 0;
    int length;
    int arr[100];
    printf("Enter the length of the array: ");
    scanf("%d", &length);
    for (int i = 0; i < length; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < length; i++)
    {
        if (arr[i]%2==0)
        {
            evencount = evencount + 1;
        }
        else
        {
            oddcount = oddcount + 1;
        }
    }
    printf("The number of even elements are %d. \n", evencount);
    printf("The number of odd elements are %d. \n", oddcount);
}