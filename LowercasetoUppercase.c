// Write a C program to convert lowercase string to uppercase.
#include <stdio.h>
int main(void)
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>'a' && str[i]<'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("Uppercase string is %s. \n", str);
}