// Write a C program to search all occurrences of a character in given string.
#include <stdio.h>
int main(void)
{
    char str[100];
    char tofind;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    char c;
    while((c = getchar()!= '\n' && c != EOF)) {}
    printf("Enter a character to find: ");
    tofind = getchar();
    int i = 0;
    while(str[i]!=0)
    {
        if(str[i]==tofind)
        {
            printf("\nThe character %c occurs at index %d.\n", str[i], i);
        }
        i = i + 1;
    }


}