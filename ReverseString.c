// Write a C program to find reverse of a string.
#include <stdio.h>
int main(void)
{

char str[100];
char reverse[100];
printf("\nEnter a string to reverse: ");
scanf("%s", str);
int i = 0;
int len;
while(str[i]!='\0')
{
    len = i;
    i = i + 1;
}
int j = 0;
while(str[len]!='\0')
{
    reverse[j] = str[len];
    len = len-1;
    j = j + 1;
}
printf("%s \n", reverse);
printf("\n");
}