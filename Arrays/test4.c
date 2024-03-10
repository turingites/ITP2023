#include <stdio.h>

int main(void) {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Make sure the input number is positive
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10; // Get the last digit
        sum += digit;    // Add the digit to the sum
        num /= 10;       // Remove the last digit
    }

    printf("The sum of the digits of the given number is: %d\n", sum);

    return 0;
}
