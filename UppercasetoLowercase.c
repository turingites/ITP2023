// Write a C program to convert uppercase string to lowercase.
#include <stdio.h>
int main(void)
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]>'A' && str[i]<'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("The lowercase string is %s. \n", str);
}