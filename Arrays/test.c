#include <stdio.h>
#include<math.h>

int main(void) 
{
  int num=0;
  int ld;
  int fd;
  int digit=0;
  

  printf("Enter the value of the number: ");
  scanf("%d", &num);
  int temp = num;

  while(temp>0)
    {
      temp=temp/10;
      digit=digit+1;
      
    }
  printf("Number of digits: %d\n", digit);


  ld=num%10;
  fd=num/pow(10, (digit-1));
  
  printf("First digit: %d\n", fd);
  printf("Last digit: %d\n", ld);
  int num1=0;
  num1=ld*pow(10,digit-1)+((num)-(fd*pow(10,digit-1)))+fd*1;
  printf("The number after swoping the digits: %d\n", num1);

  return 0;
}