// Write a C program to insert element in array at specified position.

#include <stdio.h>
int InsertElement(int arr[], int element, int position, int length);
int main(void)
{
    int length, element, position;
    int arr[100];
    printf("Enter the length of the array: ");
    scanf("%d", &length);
    for(int i = 0; i < length; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to insert: ");
    scanf("%d", &element);
    printf("Enter the position at which you want to insert the element: ");
    scanf("%d", &position);
    InsertElement(arr, element, position, length);
}

int InsertElement(int arr[], int element, int position, int length)
{
    

    for(int i = (length); i >= (position); i--)
    {
        arr[i] = arr[i-1];
    }

    length = length + 1;
    arr[position-1] = element;
    

    for(int i = 0; i < length; i++)
    {
        printf("%d\n", arr[i]);
    }
}