// Write a C program to count total number of negative elements in an array.
#include <stdio.h>
int main(void)
{
    int count = 0;
    int length, arr[100];
    printf("Enter the length of the array: ");
    scanf("%d", &length);
    for(int i = 0; i < length; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < length; i++)
    {
        if(arr[i]<0)
        {
            count = count + 1;
        }
    }
    printf("The count of the negative elements is %d. \n", count);
    return count;
}



























