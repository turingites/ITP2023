// Write a C program to concatenate two strings.
#include <stdio.h>
int main(void)
{
    char str1[100];
    char str2[100];

    printf("\nEnter string 1: ");
    scanf("%s", str1);
    printf("\nEnter string 2: ");
    scanf("%s", str2);

    int i = 0;
    while(str1[i]!= '\0')
    {
        i = i + 1;
    }
    int j = 0;
    while(str2[j]!='\0')
    {
        str1[i] = str2[j];
        i = i + 1;
        j = j + 1;
    }

    printf("The concatenated string is %s. \n", str1);
}