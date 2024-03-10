// Write a C program to find largest and second largest element in an array.

#include <stdio.h>
int SecondLargest(int arr[], int length);
int main(void)
{
    int length;
    int arr[1000];
    printf("Enter the length of the array: ");
    scanf("%d", &length);
    for(int i = 0; i < length; i ++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);   
    }
    SecondLargest(arr, length);
}

int SecondLargest(int arr[], int length)
{
    int largest = arr[0];
    int secondlargest = arr[1];
    for(int i = 0; i < length; i ++)
    {
        if (arr[i]>largest)
        {
            largest = arr[i];
        }
        if (arr[i] > secondlargest && arr[i] < largest)
        {
            secondlargest = arr[i];
        }
    }
    printf("Largest: %d\nSecond largest: %d", largest, secondlargest);
    return secondlargest;
}