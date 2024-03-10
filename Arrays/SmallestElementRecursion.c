// Write a C program to print the minimum element in an array using recursion.

#include <stdio.h>
int MinimumElement(int array[], int length, int minimum);
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

    int minimum = arr[0];
    printf("The minimum element is %d.", MinimumElement(arr, length-1, minimum));


}

int MinimumElement(int arr[], int length, int minimum)
{
    if(length>-1)
    {
        if(arr[length] < minimum)
        {
            minimum = arr[length];
            return minimum = MinimumElement(arr, length-1, minimum);
    
            
        }
        else
        {
            return minimum = MinimumElement(arr, length-1, minimum);
        }
    }
    else
    {
        return minimum;
    }
}

