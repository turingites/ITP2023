// Write a C program to input elements in array and find frequency of each element in array.
#include <stdio.h>
void FrequencyElement(int arr[], int element, int length);
int main(void)
{
    int length, element;
    int arr[1000];
    int freq[1000];
    printf("Enter the length of the array: ");
    scanf("%d", &length);
    for(int i = 0; i < length; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to determine frequency: ");
    scanf("%d", &element);
    FrequencyElement(arr, length, element);
}

void FrequencyElement(int arr[], int length, int element)
{
    int frequency = 0;
    for(int i = 0; i < length; i++)
    {
        if(arr[i]==element)
        {
            frequency = frequency + 1;
        }
    }
    printf("The frequency of the element %d is %d.", element, frequency);
}