// Write a C program to search an element in an array.

#include <stdio.h>
void SearchElement(int arr[], int length, int element);
int main(void)
{
    int length, arr[100], element;
    printf("Enter the length of the array: ");
    scanf("%d", &length);
    for(int i = 0; i < length; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &element);
    SearchElement(arr, length, element);


}

void SearchElement(int arr[], int length, int element)
{
    for(int i = 0; i < length; i++)
    {
        if (arr[i]==element)
        {
            printf("Element %d found at index %d.", element, i);
            break;
        }
        else
        {
            printf("Element %d not found.", element);
            break;
        }
    }
}