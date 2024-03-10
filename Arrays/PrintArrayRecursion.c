// Write a C program to print an array of elements using recursion.
#include <stdio.h>
void PrintArray(int length, int start, int arr[100])
{
    if(length<=start)
    {
        return;
    }
    printf("%d ", arr[start]);
    PrintArray(length, start+1, arr);
}

int main(void)
{
    int length;
    int arr[100];
    printf("Enter the length of the array: ");
    scanf("%d", &length);
    for (int i = 0; i < length; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }
    PrintArray(length, 0, arr);
}
