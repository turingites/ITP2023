#include <stdio.h>
#include <math.h>

#define SIZE 10

// Function to read 10 integer values and validate the range
void readArray(int Age[]) {
    int i;
    printf("Enter 10 integers (1 to 125): \n");
    for (i = 0; i < SIZE; i++) {
        do {
            printf("Age[%d]: ", i + 1);
            scanf("%d", &Age[i]);
            if (Age[i] < 1 || Age[i] > 125) {
                printf("Invalid input. Age should be between 1 and 125. Try again.\n");
            }
        } while (Age[i] < 1 || Age[i] > 125);
    }
}

// Function to calculate the minimum value
int calculateMinimum(int Age[]) {
    int min = Age[0];
    for (int i = 1; i < SIZE; i++) {
        if (Age[i] < min) {
            min = Age[i];
        }
    }
    return min;
}

// Function to calculate the maximum value
int calculateMaximum(int Age[]) {
    int max = Age[0];
    for (int i = 1; i < SIZE; i++) {
        if (Age[i] > max) {
            max = Age[i];
        }
    }
    return max;
}

// Function to calculate the mean
double calculateMean(int Age[]) {
    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += Age[i];
    }
    return sum / SIZE;
}

// Function to calculate the standard deviation
double calculateStandardDeviation(int Age[], double mean) {
    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += pow(Age[i] - mean, 2);
    }
    return sqrt(sum / SIZE);
}

// Function to find the second smallest value
int findSecondSmallest(int Age[]) {
    int smallest = Age[0];
    int secondSmallest = Age[0];
    for (int i = 1; i < SIZE; i++) {
        if (Age[i] < smallest) {
            secondSmallest = smallest;
            smallest = Age[i];
        } else if (Age[i] < secondSmallest && Age[i] != smallest) {
            secondSmallest = Age[i];
        }
    }
    return secondSmallest;
}

// Function to find the second largest value
int findSecondLargest(int Age[]) {
    int largest = Age[0];
    int secondLargest = Age[0];
    for (int i = 1; i < SIZE; i++) {
        if (Age[i] > largest) {
            secondLargest = largest;
            largest = Age[i];
        } else if (Age[i] > secondLargest && Age[i] != largest) {
            secondLargest = Age[i];
        }
    }
    return secondLargest;
}

int main() {
    int Age[SIZE];
    readArray(Age);

    int min = calculateMinimum(Age);
    int max = calculateMaximum(Age);
    double mean = calculateMean(Age);
    double stdDev = calculateStandardDeviation(Age, mean);
    int secondSmallest = findSecondSmallest(Age);
    int secondLargest = findSecondLargest(Age);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Mean: %.2f\n", mean);
    printf("Standard Deviation: %.2f\n", stdDev);
    printf("Second Smallest: %d\n", secondSmallest);
    printf("Second Largest: %d\n", secondLargest);

    return 0;
}
