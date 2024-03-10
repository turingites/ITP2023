#include <stdio.h>

int num(int array[], int n, int k);
void love(int array[], int n, int p, int k, int i);

int main() {
    int n = 0;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    int array1[n];
    printf("Enter the value of the elements: ");
    for (int a = 0; a < n; a++) {
        scanf("%d", &array1[a]);
    }
    for (int a = 0; a < n; a++) {
        printf("%d ", array1[a]);
    }
    int k = 0;
    printf("\nEnter the value of the sum of three digits: ");
    scanf("%d", &k);

    // Check if there are three numbers that add up to the sum
    if (!num(array1, n, k)) {
        printf("There are no three numbers that add up to the sum %d\n", k);
    }

    return 0;
}

int num(int array1[], int n, int k) {
    int i = 0;
    int p = 0;
    int found = 0;
    
    if (n == 0) {
        return found;
    } else {
        i = array1[n - 1];
        p = k - i;
        love(array1, n, p, k, i);
        return num(array1, n - 1, k);
    }
}

void love(int array1[], int n, int p, int k, int i) {
    int j = 0;
    int l = 0;
    int found = 0;

    for (int o = 0; o < n - 1; o++) {
        for (int q = o + 1; q < n; q++) {
            if (array1[o] + array1[q] == p) {
                j = array1[o];
                l = array1[q];

                printf("The three numbers that add up to the total %d are %d, %d, %d\n", k, i, j, l);
                found = 1;
            }
        }
    }
}
