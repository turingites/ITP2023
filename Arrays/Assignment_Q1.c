#include <stdio.h>

int main() {
    int num = 0;
    printf("Enter the value of the number: ");
    scanf("%d", &num);
    int count = 0;
    int temp = 0;
    int digits[8] = {0};

    if ((num > 9999) && (num < 99999999)) {
        printf("The number given is within the range.\n");
    } else {
        printf("The number given is not within the range.\n");
    }

    if (num > 0) {
        printf("The given number is a positive number.\n");
    } else {
        printf("The given number is a negative number.\n");
    }

    if ((num > 9999) && (num < 99999999) && (num > 0)) {
        printf("Enter digits of the number separated by a blank space:\n");
        for (int i = 0; i < 8; i++) {
            scanf("%d", &digits[i]);
        }

        temp = num;
        for (int i = 0; i < 8; i++) {
            if (digits[i] == 3 && digits[i + 1] == 3 && digits[i + 2] == 3) {
                count = i;
                break;
            }
        }

        if (count != 0) 
        {
            printf("The given number has consecutive 3's\n");
            printf("The first occurrence of three consecutive 3's is at position: %d\n", count + 1);
        } 
        else {
            printf("The given number does not contain three consecutive 3's.\n");
        }
    }

    return 0;
}
