// Write a C program to find sum of all array elements using recursion.

#include <stdio.h>
int ArraySum(int arr[100], int length, int start)
{
    if(length<=start)
    {
        return 0;
    }
    return(arr[start] + ArraySum(arr, length, start+1));

}

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
    printf("The sum of the elements in the array is %d.", ArraySum(arr,length,0));
}
