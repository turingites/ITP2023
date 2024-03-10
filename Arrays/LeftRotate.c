// Write a C program to left rotate an array. 

#include <stdio.h>
void LeftRotate(int length, int rotate, int arr[]);
int main(void)
{
    int length, rotate, arr[100];

    printf("Enter the length of the array: ");
    scanf("%d", &length);

    for(int i = 0; i < length; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }

    printf("By how much do you want to left rotate the array? ");
    scanf("%d", &rotate);
    LeftRotate(length, rotate, arr);
}

void LeftRotate(int length, int rotate, int arr[])
{
    for(int j = 0; j < rotate; j++)
    {
        int first = arr[0];
        int i = 0;
        for(i = 0; i < length-1; i++)
        {
            arr[i] = arr[i+1];
            
        }
        arr[i] = first;
       
    }

    printf("The rotated array is: ");

    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}