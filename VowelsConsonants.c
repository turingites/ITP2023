// Write a C program to count total number of vowels and consonants in a string.
#include <stdio.h>
int main(void)
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    int i = 0;
    int vowel = 0, consonant = 0;
    while(str[i]!='\0')
    {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'o' || str[i] == 'O' || str[i] =='u' || str[i] == 'U')
        {
            vowel = vowel + 1;
        }
        else if(str[i] > 'a' && str[i] < 'z' || str[i] > 'A' && str[i] < 'Z')
        {
            consonant = consonant + 1;
        }
        i = i + 1;
    }
    printf("The number of vowels in the given stirng is %d. \n", vowel);
    printf("The number of consonants in the given string is %d. \n", consonant);
}