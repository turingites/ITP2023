// Write a C program to find the largest element in an array using recursion.

#include <stdio.h>

int MaximumElement(int array[], int size, int largest);

int main(void)
{
    int length;
    int arr[100];
    printf("Enter the length of the array: ");
    scanf("%d", &length);

    for(int i = 0; i < length; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    largest = MaximumElement(arr, length-1, largest);
    printf("\nThe largest element is %d.", largest);
    printf("\n");


}

int MaximumElement(int arr[], int length, int largest)
{ 
    if(length>-1)
    {
        if(arr[length]>largest)
        {
            largest = (arr[length]);
        }
        return(largest = MaximumElement(arr, length-1, largest));
        
    }
    else
    {
        return largest;
    }
}