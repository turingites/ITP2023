// Write a C program to sort array elements in ascending or descending order.

#include <stdio.h>
void Ascending(int arr[], int length);
void Descending(int arr[], int length);
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
    Ascending(arr, length);
    Descending(arr, length);

}

void Ascending(int arr[], int length)
{
    int temp;
    for(int i = 0; i < length; i++)
    {
        for(int j = i + 1; j < length; j++)
        {
            if(arr[i] > arr[j])

            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The array sorted in ascending order is: ");
    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

void Descending(int arr[], int length)
{
    int temp;
    for(int i = 0; i < length; i++)
    {
        for(int j = i + 1; j < length; j++)
        {
            if(arr[i] < arr[j])

            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The array sorted in descending order is: ");
    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

}
