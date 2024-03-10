// Write a C program to check whether a string is palindrome or not.
#include <stdio.h>
int PalindromeString(char str[100])
{
    char reverse[100];
    int len, i = 0;
    while(str[i]!='\0')
    {
        len = i;
        i = i + 1;
    }
  
    int j = 0;
    while(str[len]!='\0')
    {
        reverse[j]  = str[len];
        len = len - 1;
        j = j + 1;
    }
   
    int flag, k = 0;
    while(str[k]!='\0')
    {
        if(reverse[k]==str[k])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
        k = k + 1;
    }

    return flag; 
}
int main(void)
{
    char str[100];
    printf("\nEnter a string to check whether it is a palindrome or not. \n");
    scanf("%s", str);
    if (PalindromeString(str))
    {
        printf("It is a palindrome. \n");
    }
    else
    {
        printf("It is not a palindrome. \n");
    }
    printf("\n");
}