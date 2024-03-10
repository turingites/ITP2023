// Write a C program to count total number of duplicate elements in an array.

#include <stdio.h>
void CountDuplicate(int array[], int length);
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
    CountDuplicate(arr, length);
}

void CountDuplicate(int arr[], int length)
{
    int count = 0;
    for(int i = 0; i < length; i++)
    {
        for(int j = i + 1; i < length; i++)
        {
            if(arr[i]==arr[j])
            {
                count = count + 1;
            }
        }
    }
    printf("The count of duplicate elements is %d.", count);
    
}