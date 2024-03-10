// Write a C program to concatenate two strings using pointer.
#include <stdio.h>
int main(void)
{
    char str1[100];
    char str2[100];
    char* s1 = str1;
    char* s2 = str2;

    printf("Enter a string: ");
    scanf("%s", str1);
    printf("Enter another string: ");
    scanf("%s", str2);

    while(++(*str1));
    
    while(*(s1++) = *(s2++));
    printf("Concatenated string: %s", str1);
}