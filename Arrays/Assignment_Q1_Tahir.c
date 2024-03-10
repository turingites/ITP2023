#include <stdio.h>

int main() 
{
    long long int num;
    printf("Enter a positive number (between 10000 and 99999999): ");
    scanf("%lld", &num);
    if (num < 10000 || num > 99999999) 
    {
        printf("Error: The number should be between the range 10000 and 99999999.\n");
        return 1;
    }

    char numStr[9];  // Maximum 8 digits plus a null terminator
    snprintf(numStr, sizeof(numStr), "%lld", num);

    int position = -1;  // To store the position of consecutive 3's
    for (int i = 0; numStr[i] != '\0'; i++) 
    {
        if (numStr[i] == '3' && numStr[i + 1] == '3' && numStr[i + 2] == '3') 
        {
            position = i;
            break;  // Consecutive 3's found, so break the loop
        }
    }

    if (position != -1) 
    {
        printf("Three consecutive 3's start at position %d.\n", position + 1);
    } else {
        printf("No three consecutive 3's found in the number.\n");
    }

    return 0;
}