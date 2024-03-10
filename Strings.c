// Create a 32-element char 1D-array ( pStr[ ] ) dynamically.
// Pass the dynamic array to a function and toggle upper-lower cases in-place ○ Apply appropriate ASCII arithmetics
// Access the contents of dynamic array in various ways

#include <stdio.h>
#include <stdlib.h>

int ToggleCase(char *pStr)
{
    int i = 0;
    while(pStr[i]!='\0')
    {
        if(pStr[i]>='a'&& pStr[i]<='z')
        {
            pStr[i] = pStr[i] - 32;
        }
        else if(pStr[i]>='A' && pStr[i]<='Z')
        {
            pStr[i] = pStr[i] + 32;
        }
        i = i + 1;
    }
    printf("%s \n", pStr);
}
int main(void)
{
char *pStr = NULL;
pStr = (char*)malloc(32*sizeof(char));
char str[100];
printf("Enter a string: ");
scanf("%s", pStr);
printf("%s \n", pStr);
ToggleCase(pStr);
}


