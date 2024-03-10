// Write a C program to sort even and odd elements of array separately.

#include <stdio.h>
void MergeArray(int arr2[], int arr3[], int length1, int length2);
void SortArray(int arr[], int length);

int main(void)
{
    int arr1[100], arr2[100], arr3[100], len;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &len);
    for(int i = 0; i < len; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr1[i]);
    }
    int j = 0, k = 0; 

    for(int i = 0; i < len; i++)
    {
        if(arr1[i]%2==0)
        {
            arr2[j] = arr1[i];
            j = j + 1;
        }
        else
        {
            arr3[k] = arr1[i];
            k = k + 1;
        }
    }
    
    SortArray(arr2, j);
    SortArray(arr3, k);
    MergeArray(arr2, arr3, j, k);

}

void SortArray(int arr[], int length)
{
    int temp;
    for (int i = 0; i < length; i++)
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
}

void MergeArray(int arr1[], int arr2[], int length1, int length2)
{
    int MergeArray[200];
    for(int i = 0; i < (length1); i++)
    {
        MergeArray[i] = arr1[i];
    }
    for(int i = 0, j = length1; j < (length1+length2) && i < length2; i++, j++)
    {
        MergeArray[j] = arr2[i]; 
    }

    printf("Array with odd and even elements sorted separately: ");
    for(int i = 0; i < (length1+length2); i++)
    {
        printf("%d ", MergeArray[i]);
    }
}