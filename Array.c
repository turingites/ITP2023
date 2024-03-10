#include <stdio.h>
int main()
{
int len;
int arr[100];
printf("Enter the length of the array: ");
scanf("%d", &len);

for(int i = 0; i < len; i++)
{
    printf("Enter an element: ");
    scanf("%d", &arr[i]);
}
// Print array

for(int i = 0; i < len; i++)
{
    printf("arr[%d] --> %d \n", i, arr[i]);
}
}
