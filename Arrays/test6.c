#include <stdio.h>
#include <math.h>

// Function to swap two elements and cube them
void swapCube(int *a, int *b) {
    int temp = *a;
    *a = pow(*b, 3);
    *b = pow(temp, 3);
}

// Function to reverse the array and cube its elements
void reverseCubeArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        swapCube(&arr[start], &arr[end]);
        start++;
        end--;
    }
    arr[2] = pow(arr[2],3);
}

// Function to display the contents of an array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int Array[5] = {1, 2, 3, 4, 5};

    printf("Original Array: ");
    displayArray(Array, 5);

    reverseCubeArray(Array, 5);

    printf("Modified Array: ");
    displayArray(Array, 5);

    return 0;
}