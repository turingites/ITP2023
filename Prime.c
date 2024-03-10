// Write a program to check whether a given number is prime or not.
#include <stdio.h>
int PrimeNum(int num)
{
    int flag;
    if(num==1)
    {
        flag = 0;
    }
    else if(num==2)
    {
        flag = 1;
    }
    else
    {
        for(int i=2; i<num; i++)
        {
            if(num%i!=0)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
int main(void)
{
    int num;
    printf("Enter a number to check whether it's prime or not. ");
    scanf("%d", &num);
    if(PrimeNum(num))
    {
        printf("The number is prime. \n");
    }
    else
    {
        printf("The number is not prime. \n");
    }

}