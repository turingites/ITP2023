#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    char *str1,*str2,*str3;
    str1 =(char*) malloc(32 * sizeof(char));
    str2 =(char*) malloc(32 * sizeof(char));
    printf("enter a word for str1\n");
    scanf("%s",str1);
    printf("enter a word for str2\n");
    scanf("%s",str2);
    int len1= strlen(str1)/2;
    int len2= strlen(str2) - strlen(str2)/2;
    
    str3 =(char*) malloc(len1+len2);
    for(int i=0;i<len1;i++)
    {
       str3[i]=str1[i];
    }
    int c= len2;
    for(int j=len1;j<len1+len2;j++)
    {
        str3[j]=str2[c];
        c++;
    }
    printf("%s",str3);
    
    
    return 0;
}