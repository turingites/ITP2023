#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str1, *str2, *str3;
    int len1, len2, len3;

    // Allocate memory for str1 and str2
    str1 = (char *)malloc(32 * sizeof(char));
    str2 = (char *)malloc(32 * sizeof(char));

    // Check if memory allocation was successful
    if (str1 == NULL || str2 == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Read strings from the user
    printf("Enter the first string (str1): ");
    scanf("%s", str1);

    printf("Enter the second string (str2): ");
    scanf("%s", str2);

    // Calculate lengths of str1 and str2
    len1 = strlen(str1);
    len2 = strlen(str2);

    // Calculate lengths for the first and second halves of str1 and str2
    int half_len1 = len1 / 2;
    int half_len2 = len2 - half_len1;

    // Calculate length of str3
    len3 = half_len1 + half_len2;

    // Dynamically allocate memory for str3
    str3 = (char *)malloc((len3 + 1) * sizeof(char));

    // Check if memory allocation was successful
    if (str3 == NULL) {
        printf("Memory allocation failed.\n");
        free(str1);
        free(str2);
        return 1; // Exit with an error code
    }

    // Copy the first half of str1 to str3
    strncpy(str3, str1, half_len1);
    str3[half_len1] = '\0'; // Null-terminate the first half in str3

    // Concatenate the second half of str2 to str3
    strcat(str3, str2 + half_len1);

    // Print the concatenated string
    printf("Concatenated string (str3): %s\n", str3);

    // Free dynamically allocated memory
    free(str1);
    free(str2);
    free(str3);

    return 0;
}
