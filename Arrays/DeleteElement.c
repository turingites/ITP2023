// Write a C program to delete element from array at specified position.
#include <stdio.h>
void DeleteElement(int arr[], int length, int position);
int main(void)
{
    int length, position;
    int arr[1000];
    printf("Enter the length of the array: ");
    scanf("%d", &length);
    for(int i = 0; i < length; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter the position at which you want to delete an element: ");
    scanf("%d", &position);
    DeleteElement(arr, length, position);
}
void DeleteElement(int arr[], int length, int position)
{
    int temp;
    for(int i = (position-1); i <length; i++)
    {
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    length = length - 1;

    printf("The output array is: ");
    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}