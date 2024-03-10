#include <stdio.h>
int main(void)
{
    int n;
    int num = 0;
    printf("Enter number to check if its a palindrome: ");
    scanf("%d", &n);
    num = n;
    int rev = 0;
    
    while(n !=0)
    { 
    rev = (rev*10)+(n%10);
    n /= 10;

    }
    
    if(rev == num)
    {
    printf("the entered number is palindrome");
    }
    else 
    {
        printf("the entered number is not a palindrome");
    }
    return 0;
}
