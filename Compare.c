// Write a C program to compare two strings.
#include <stdio.h>
int main(void)
{
    char str1[100];
    char str2[100];
    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);
    int i = 0;
    int flag = 0;
    while(str1[i]!='\0')
    {
      if(str1[i] == str2[i])
      {
         flag = 1;
      }
      else
      {
        flag = 0;
        break;
      }
      i = i+1;
    }
    if(flag==1)
    {
        printf("The strings are the same.\n");
    }
    else
    {
        printf("The strings are not the same.\n");
    }
    return flag;
}