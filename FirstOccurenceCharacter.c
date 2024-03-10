// Write a C program to find first occurrence of a character in a given string.
#include <stdio.h>
int Index(char str[100], char character)
{
    
    int index, i = 0;
    while(str[i]!='\0')
    {
       
        if(str[i] == character)
        {
            index = i;
            break;
        }
        else
        {
            index = -1;
        }
        i = i + 1;
    }
    return index;
}
int main(void)
{
    char str[100];
    char character;
    int index;
    printf("\n\nEnter a string: ");
    scanf("%s", str);
    char c;
    while((c = getchar()!= '\n' && c != EOF)) {}

    printf("\n\nEnter a character to find first occurrence: ");
    scanf("%c", &character);
   
    index = Index(str, character);
    if(index == -1)
    {
        printf("\n\nCharacter not found. \n");  
    }
    else
    {
        printf("\n\nCharacter %c found at index %d. \n", character, index);
    }



}
