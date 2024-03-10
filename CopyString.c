// Write a program to copy one string to another
#include <stdio.h>
int main(void)
{
    char str1[100] = {'\0'};
    char str2[100] = {'\0'};
    printf("Enter a string: ");
    scanf("%[^\n]s", str1);
    int i = 0;
    for(i=0; str1[i]!='\0'; i++)
    {
        str2[i] = str1[i];
    }
    printf("str1: %s \n", str1);
    printf("str2: %s \n", str2);

}