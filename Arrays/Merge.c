// Write a C program to merge two array to third array.

#include <stdio.h>
void MergeArray(int arr1[], int arr2[], int length1, int length2);
int main(void)
{
    int length1, length2, arr1[100], arr2[100];
    printf("Enter the length of the first array: ");
    scanf("%d", &length1);

    for(int i = 0; i < length1; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr1[i]);
    }
    printf("Enter the length of the second array: ");
    scanf("%d", &length2);

    for(int i = 0; i < length2; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr2[i]);
    }
    MergeArray(arr1, arr2, length1, length2);
}

void MergeArray(int arr1[], int arr2[], int length1, int length2)
{
    int arr3[200];
    for(int i = 0; i < (length1); i++)
    {
        arr3[i] = arr1[i];
    }
    for(int i = 0, j = length1; j < (length1+length2) && i < length2; i++, j++)
    {
        arr3[j] = arr2[i]; 
    }

    for(int i = 0; i < (length1+length2); i++)
    {
        printf("%d ", arr3[i]);
    }
}
