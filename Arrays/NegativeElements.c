// Write a C program to print all negative elements in an array.
#include <stdio.h>

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
    printf("The negative elements are: ");
    for(int i = 0; i < length; i++)
    {
        if(arr[i]<0)
        {
            printf("%d ", arr[i]);
        }
    }

}