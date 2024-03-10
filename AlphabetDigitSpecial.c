// Write a C program to find total number of alphabets, digits or special character in a string.
#include <stdio.h>
int main(void)
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    int alphabet = 0, digit = 0, special = 0;
    for(int i = 0; str[i]!='\0'; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabet = alphabet + 1;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit = digit +1;
        }
        else
        {
            special = special + 1;
        }
    }
    printf("The number of alphabet is %d. \n", alphabet);
    printf("The number of digits is %d. \n", digit);
    printf("The number of special characters is %d. \n", special);

}