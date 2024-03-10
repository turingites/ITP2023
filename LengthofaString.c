// Write a program to find the length of a string.
#include <stdio.h>
int main(void)
{
    char str[100]={0};
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    int count = 0;
    for(char i=0; str[i]!='\0'; i++)
    {
        count = count + 1;
    }
    printf("The length of the entered string is %d. \n", count);

}