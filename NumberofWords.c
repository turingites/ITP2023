// Write a C program to count total number of words in a string.
#include <stdio.h>
int main(void)
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    int i = 0;
    int words = 1;
    while(str[i]!='\0')
    {
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            words = words + 1;
        }
        i = i+1;
    }
    printf("The number of words in the given string is %d. \n", words);

}