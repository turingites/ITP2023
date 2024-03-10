#include <stdio.h>

int main(void) 
{
  int num1=0;
  int n=0;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  for(int i=1;i<n;i=i+1)
    {
      num1=((i%n!=0) &&(i%(1 && i)==0));
      printf("%d\n", num1);
    }
  printf("List of Prime numbers Between 1 and n : %d\n", num1);
  return 0;
}