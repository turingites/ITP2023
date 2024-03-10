// Write a C program to print all unique elements in array.

#include <stdio.h>
int UniqueElement(int arr[], int length);
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
    UniqueElement(arr, length);

}

int UniqueElement(int arr[], int length)
{
    for(int i = 0; i < length; i++)
    {
        int count = 0;
        
        for(int j = 0; j < length; j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    count = count + 1;
                }
            }
        }
        if(count==0)
        {
            printf("The unique elements are: ");
            printf("%d ",arr[i]);
        }
    }
    return 0;
}