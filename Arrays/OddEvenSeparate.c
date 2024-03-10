// Write a C program to put even and odd elements of array in two separate array.

#include <stdio.h>
void EvenOdd(int arr[], int length);
int main(void)
{
    int length, arr[1000];
    printf("Enter the length of the array: ");
    scanf("%d", &length);
    for(int i = 0; i < length; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }
    EvenOdd(arr, length);

}

void EvenOdd(int arr[], int length)
{
    int EvenArr[100], OddArr[100], evencount = 0, oddcount = 0;
    for(int i = 0; i < length; i++)
    {
        if((arr[i]%2) == 0)
        {
            EvenArr[evencount] = arr[i];
            evencount = evencount + 1;
        }
        else
        {
            OddArr[oddcount] = arr[i];
            oddcount = oddcount + 1;
        }

    }
    printf("The even array is: ");
    for(int i = 0; i < evencount; i++)
    {
        printf("%d ", EvenArr[i]);
    }
    
    printf("\n");

    printf("The odd array is: ");
    for(int i = 0; i < oddcount; i++)
    {
        printf("%d ", OddArr[i]);
    }
}
