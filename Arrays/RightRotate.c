// Write a C program to right rotate an array.

#include <stdio.h>
void Reverse(int arr[], int low, int high);
int main(void)
{
    int length;
    int arr[1000], rotate;
    
    printf("Enter the length of the array: ");
    scanf("%d", &length);

    rotate = rotate % length;

    for(int i = 0; i < length; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
        
    }

    printf("Enter the number of times you want to right rotate the array: ");
    scanf("%d", &rotate);
    Reverse(arr, 0, length-1);
    Reverse(arr, 0, rotate-1);
    Reverse(arr, rotate, length-1);

    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
        
    }



}

void Reverse(int arr[], int low, int high)
{
    int temp;
    while (low < high)
    {
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low = low + 1;
        high = high - 1;
    }
}