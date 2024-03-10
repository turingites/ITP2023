// Write a C program to find last occurrence of a character in a given string.

#include <stdio.h>
int LastOccurence(char str[100], char tofind)
{
    printf("Entered LastOccurence");
    int index = -1;
    int i = 0;
    while(str[i]!='\0')
    {
        printf("Stuck in while");
        if(str[i]==tofind)
        {
            index = i;
        }
        i = i + 1;
    }
    return index;
}
int main(void)
{
    char str[100];
    char tofind;
    int index;
    printf("Enter a string: ");
    scanf(" %s", str);
    char c;
    while((c = getchar()!= '\n' && c != EOF)) {}
    printf("Enter the character you want to find: ");
    scanf("%c", &tofind);
    index = LastOccurence(str, tofind);
    printf("The character %c is found at %d index.", tofind, index);

}