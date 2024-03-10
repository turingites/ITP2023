// Write a C program to copy all elements from an array to another array.
#include <stdio.h>
int main(void)
{
    int length, arr[100], destarr[100];
    printf("Enter the length of the array: ");
    scanf("%d", &length);
    for(int i = 0; i < length; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }

    printf("Before copying, the source array: ");
    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nBefore copying, the desination array: ");

   for(int i = 0; i < length; i++)
   {
      printf("%d ", destarr[i]);
   }
   printf("\nAfter copying, source array: ");

   for(int i = 0; i < length; i++)
   {
      destarr[i] = arr[i];
   }
   
   for(int i = 0; i < length; i++)
   {
     printf("%d " , arr[i]);
   }
   
   printf("\nAfter copying, destination array: ");
   for(int i = 0; i < length; i++)
   {
    printf("%d ", destarr[i]);
   }

}