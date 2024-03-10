#include <stdio.h>
/* The function EvenIndex() takes two arrays as arguments: the original array and an empty array*/
int EvenIndex(int arr[], int EmptyArr[])
{
    int count = 0;
    int j = 0;
    for(int i = 0; i < 5; i++)
    {
        if(arr[i]%2==0)
        {
            count = count + 1;
            EmptyArr[j] = i;
            /* The empty array is populated with the index of the original array whose element is even. */
            j = j + 1;      
        }    
    }
    return count;
}

int main(void)
{
    int arr[5];
    int EmptyArr[5] = {};
    
    /* Reading an integer array of size 5 from the user. */

    for(int i = 0; i < 5; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }

    printf("Count of even elements: %d \n", EvenIndex(arr, EmptyArr));

    int count;
    count = EvenIndex(arr, EmptyArr);

    /* Printing the contents of the empty array */
    for(int i = 0; i < count; i++)
    {
        printf("EmptyArr[%d] --> %d \n", i, EmptyArr[i]);
    }
}
