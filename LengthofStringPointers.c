// Write a C program to find length of string using pointers.
#include <stdio.h>
int main(void)
{
    char text[100]; 
    char* str = text;
    int count = 0;
    printf("Enter a string: ");
    scanf("%s", text);
    while(*(str++)!='\0')
    {
        count = count + 1;
    }
    printf("%d", count);
}