// Write a C program to find the reverse of an array.

#include <stdio.h>

void ReverseArray(int arr[], int length);

int main(void)
{
    int length, arr[100];
    printf("Enter the length of the array: ");
    scanf("%d", &length);
    for(int i = 0; i < length; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }
    ReverseArray(arr, length);
}

void ReverseArray(int arr[], int length)
{
    printf("The reversed array is: ");
    for(int i = length-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}