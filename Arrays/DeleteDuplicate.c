// Write a C program to delete all duplicate elements from an array.

#include <stdio.h>

void RemoveElement(int arr[], int length, int element);
void DuplicateElement(int arr[], int length);

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
    DuplicateElement(arr, length);
}

void DuplicateElement(int arr[], int length)
{
    int temp;
    for(int i = 0; i < length; i++)
    {
        for(int j = i + 1; j < length; j++)
        {
            if(arr[i]==arr[j])
            {
               for(int k = j; k < length-1; k++)
               {
                arr[k] = arr[k+1];
               }
               length = length - 1;
               j = j - 1;

            }
        }
        
    }
    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}


