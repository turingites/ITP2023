#include <stdio.h>

// Function to check if an element exists in an array
int existsInArray(int num, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int set1[4] = {0};
    int set2[4] = {0};
    int unionSet[8] = {0};         // The maximum possible union size is 8
    int intersectionSet[4] = {0};  // The maximum possible intersection size is 4
    int differenceSet[4] = {0};    // The maximum possible difference size is 4

    int size1 = 0;
    int size2 = 0;

    printf("Enter elements for Set1 (up to 4 unique single-digit numbers, terminate with -1):\n");
    while (1) {
        int num;
        scanf("%d", &num);
        if (num == -1 || size1 >= 4) {
            break;
        }
        if (num >= 1 && num <= 9 && !existsInArray(num, set1, size1)) {
            set1[size1] = num;
            size1++;
        }
    }

    printf("Enter elements for Set2 (up to 4 unique single-digit numbers, terminate with -1):\n");
    while (1) {
        int num;
        scanf("%d", &num);
        if (num == -1 || size2 >= 4) {
            break;
        }
        if (num >= 1 && num <= 9 && !existsInArray(num, set2, size2)) {
            set2[size2] = num;
            size2++;
        }
    }

    // Union Operation
int unionSize = 0;
for (int i = 0; i < size1; i++) {
    if (!existsInArray(set1[i], unionSet, unionSize)) {
        unionSet[unionSize] = set1[i];
        unionSize++;
    }
}

for (int i = 0; i < size2; i++) {
    if (!existsInArray(set2[i], unionSet, unionSize)) {
        unionSet[unionSize] = set2[i];
        unionSize++;
    }
}
    // Intersection Operation
    int intersectionSize = 0;
    for (int i = 0; i < size1; i++) {
        if (existsInArray(set1[i], set2, size2)) {
            intersectionSet[intersectionSize] = set1[i];
            intersectionSize++;
        }
    }

    // Difference Operation for Set1 - Set2
    int differenceSize = 0;
    for (int i = 0; i < size1; i++) {
        if (!existsInArray(set1[i], set2, size2)) {
            differenceSet[differenceSize] = set1[i];
            differenceSize++;
        }
    }

    // Display Results
    printf("Set1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", set1[i]);
    }
    printf("\n");

    printf("Set2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", set2[i]);
    }
    printf("\n");

    printf("Union: ");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionSet[i]);
    }
    printf("\n");

    printf("Intersection: ");
    for (int i = 0; i < intersectionSize; i++) {
        printf("%d ", intersectionSet[i]);
    }
    printf("\n");

    printf("Difference (Set1 - Set2): ");
    for (int i = 0; i < differenceSize; i++) {
        printf("%d ", differenceSet[i]);
    }
    printf("\n");

    return 0;
}
