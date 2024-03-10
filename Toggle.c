// Write a C program to toggle case of each character of a string.
#include <stdio.h>
int main(void)
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    for(int i = 0; str[i]!='\0'; i++)
    {
        if(str[i]>'a' && str[i]<'z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i]>'A' && str[i]<'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("The toggled string is %s. \n", str);
}